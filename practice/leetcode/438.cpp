//https://leetcode.com/problems/find-all-anagrams-in-a-string/

// O(n) - sliding window
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int cnt[128], cnt2[128];
        memset(cnt, 0, sizeof(cnt));
        memset(cnt2, 0, sizeof(cnt2));
        
        for (char& ch : p) {
            cnt[ch]++;
        }
        
        auto ok = [] (int a[], int b[]) {
            for (int i = 0; i < 128; i++) {
                if (a[i] > b[i]) {
                    return false;
                }
            }
            return true;
        };
        
        int s_len = s.length();
        int p_len = p.length();
        for (int i = 0, j = 0; j < s_len; j++) {
            cnt2[s[j]]++;
            
            bool check = ok(cnt, cnt2);
            if (check) {
                while (j - i + 1 > p_len) {
                    cnt2[s[i]]--;
                    i++;
                }
                check = ok(cnt, cnt2);
                if (check) {
                    res.push_back(i);
                }
            }
        }
        
        return res;
    }
};