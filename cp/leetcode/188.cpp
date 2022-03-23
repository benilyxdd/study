//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

// O(n * k * 2) - n -> how many day, k -> how many trade allowed
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();

        // can use normal array to replace vector -> int dp[n + 1][k + 1][2];
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(2)));
        for (int i = 0; i <= n; i++) {
            dp[i][0][0] = 0;
            dp[i][0][1] = -1e6;
        }
        for (int i = 0; i <= k; i++) {
            dp[0][i][0] = 0;
            dp[0][i][1] = -1e6;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j][1] + prices[i - 1]);
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0] - prices[i - 1]);
            }
        }
        return dp[n][k][0];
    }
};