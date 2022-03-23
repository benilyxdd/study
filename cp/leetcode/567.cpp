//https://leetcode.com/problems/permutation-in-string/

// O(n) - sliding window
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int cnt[128], cnt2[128];
        memset(cnt, 0, sizeof(cnt));
        memset(cnt2, 0, sizeof(cnt));
        
        for (char& ch : s1) {
            cnt[ch]++;
        }
        
        auto ok = [&] (int a[], int b[]) {
            for (int i = 0; i < 128; i++) {
                if (a[i] > b[i]) {
                    return false;
                }
            }
            return true;
        };
        
        int s1_len = s1.length();
        int s2_len = s2.length();
        for (int i = 0; i < s1_len && i < s2_len; i++) {
            cnt2[s2[i]]++;
            if (ok(cnt, cnt2)) {
                return true;
            }
        }
        
        for (int i = 0, j = s1_len; j < s2_len && i < s2_len; i++, j++) {
            cnt2[s2[j]]++;
            cnt2[s2[i]]--;
            if (ok(cnt, cnt2)) {
                return true;
            }
        }
        return false;
    }
};