//https://leetcode.com/problems/minimum-window-substring/

// O(n) - O(128 * 2(n)) - sliding window
class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        
        // count every char in t
        int cnt[128], cnt2[128];
        memset(cnt, 0, sizeof(cnt));
        memset(cnt2, 0, sizeof(cnt2));
        for (char& ch : t) {
            cnt[ch]++;
        }
        
        // check function
        auto check = [] (int cnt[], int cnt2[]) {
            for (int i = 0; i < 128; i++) {
                if (cnt2[i] < cnt[i]) {
                    return false;
                }
            }
            return true;
        };
        
        vector<array<int, 2>> possible_ans;
        
        int i = 0, j = 0;
        for (; j < n; ) {
            // char temp = s[j];
            // cnt2[temp]++;
            
            bool go = check(cnt, cnt2);
            if (!go) {
                while (!go && j < n) {
                    cnt2[s[j]]++;
                    j++;
                    go = check(cnt, cnt2);
                }
                if (j != n) {
                    possible_ans.push_back({i, j-1});
                }
            } else if (go) {
                while (go && i < j) {
                    cnt2[s[i]]--;
                    i++;
                    go = check(cnt, cnt2);
                }
                possible_ans.push_back({i-1, j-1});
            }
        }
        bool ok = check(cnt, cnt2);
        if (ok) {
            while (ok && i < j) {
                cnt2[s[i]]--;
                i++;
                ok = check(cnt, cnt2);
            }
            possible_ans.push_back({i-1, j-1});
        }
        
        string real_ans = "";
        if (possible_ans.size() != 0) { 
            int mn = (int)1e9;
            for (auto& ar : possible_ans) {
                cout << ar[0] << ' ' << ar[1] << '\n';
            }
            array<int, 2> pos = {-1, -1};
            for (array<int, 2>& ar : possible_ans) {
                int diff = ar[1] - ar[0] + 1;
                if (diff < mn) {
                    mn = diff;
                    pos = ar;
                }
            }
            for (int k = pos[0]; k <= pos[1]; k++) {
               real_ans += s[k];
            }
        }
        
        return real_ans;
    }
};