//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/

// O(n * 2)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        vector<vector<int>> dp(n + 2, vector<int>(2));
        for (int i = 0; i <= n + 1; i++) {
            dp[i][0] = 0;
        }
        dp[0][1] = -1e6;
        dp[1][1] = -1e6;
        
        for (int i = 2; i <= n + 1; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i - 2]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 2][0] - prices[i - 2]);
        }
        
        return dp[n + 1][0];
    }
};