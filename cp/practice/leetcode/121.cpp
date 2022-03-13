//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// O(n) - maintains smallest price 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int last = INT_MAX;
        
        for (int &price : prices) {
            if (last > price) {
                last = price;
            } 
            mx = max(mx, price - last);
        }
        
        return mx;
    }
};

// O(n * k * 2) - n -> how many day, k -> 1 in this question
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int k = 1;

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