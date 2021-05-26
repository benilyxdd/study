//https://leetcode.com/problems/longest-substring-without-repeating-characters/

// O(n) - sliding window
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt[128], n = s.length(), mx = 0;
        memset(cnt, 0, sizeof(cnt));
        
        auto check = [] (int cnt[]) {
            for (int i = 0; i < 128; i++) {
                if (cnt[i] > 1) {
                    return false;
                }
            }
            return true;
        };
        
        for (int i = 0, j = 0; j < n; j++) {
            char temp = s[j];
            cnt[temp]++;
            
            bool ok = check(cnt);
            if (!ok) {
                while (!ok) {
                    char temp2 = s[i];
                    cnt[temp2]--;
                    ok = check(cnt);
                    i++;
                }
                // mx = max(j - i + 1, mx);
            } else {
                mx = max(j - i + 1, mx);
            }
        }
        
        return mx;
        
    }
};