//https://leetcode.com/problems/longest-common-prefix/

// O(n * m) - strs.size() * min_string_len - just iterative 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) 
            return "";
        string ans = "";
        int mn = (int)1e5;
        for (string& x : strs) {
            mn = min(mn, (int)x.length());
        }
        
        for (int i = 0; i < mn; i++) {
            char f = strs[0][i];
            bool ok = 1;
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != f) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans += f;
            } else {
                break;
            }
        }
        return ans;
    }
};