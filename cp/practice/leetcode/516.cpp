https://leetcode.com/problems/longest-palindromic-subsequence/

// O(|s| ^ 2) - dp[i + 1][j - 1] + 2 -> possible to add s[i] and s[j] to front and back
//              - dp[i + 1][j] and dp[i][j - 1] -> cannot -> find previous maximum
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }
        
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                } else {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[0][n - 1];
    }
};