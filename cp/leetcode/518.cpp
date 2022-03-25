// https://leetcode.com/problems/coin-change-2/

// O(n ^ 2) - dp iterative
class Solution {
 public:
  int change(int amount, vector<int>& coins) {
    int n = coins.size();
    // vector<int> dp(amount + 1, INT_MAX);
    int dp[amount + 1];
    for (int i = 0; i <= amount; i++) {
      dp[i] = 0;
    }
    dp[0] = 1;

    for (int j = 0; j < n; j++) {
      for (int i = 1; i <= amount; i++) {
        int curCoin = coins[j];
        if (i >= curCoin) {
          dp[i] += dp[i - curCoin];
        }
      }
    }

    return dp[amount];
  }
};