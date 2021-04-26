//https://leetcode.com/problems/stone-game/

// O(n ^ 2 * 2) - dp[i + 1][j][1] + piles[i] -> chose the first stone in [i or j];
//              - dp[i][j - 1][1] + piles[j] -> chose the last stone in [i or j];
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, 0)));
        for (int i = 0; i < n; i++) {
            dp[i][i][0] = piles[i];
        }
        
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                int a = dp[i + 1][j][1] + piles[i]; 
                int b = dp[i][j - 1][1] + piles[j];
                if (a > b) {
                    dp[i][j][0] = a;
                    dp[i][j][1] = dp[i + 1][j][0];
                } else {
                    dp[i][j][0] = b;
                    dp[i][j][1] = dp[i][j - 1][0];
                }
            }
        }
        return dp[0][n - 1][0] > dp[0][n - 1][1];
    }
};