//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

// O(n * 2) - n -> day(s) of stock
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        
        vector<vector<int>> dp(n + 1, vector<int>(2));
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0;
        }
        dp[0][1] = -1e6;
        
        for (int i = 1; i <= n; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i - 1]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i - 1] - fee);
        }
        
        return dp[n][0];
    }
};