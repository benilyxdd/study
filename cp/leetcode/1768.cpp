// https://leetcode.com/problems/merge-strings-alternately/

// O(n + m) - implementation
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.length();
        int m = word2.length();
        for (int i = 0; i < min(n, m); i++) {
            ans += word1[i];
            ans += word2[i];
        }
        ans += (n > m ? word1.substr(m) : word2.substr(n));
        return ans;
    }
};