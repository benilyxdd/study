// https://leetcode.com/problems/coin-change/

// O(n ^ 2) - dp iterative
// vector takes much more time than arrays
class Solution {
 public:
  int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();
    // vector<int> dp(amount + 1, INT_MAX);
    int dp[amount + 1];
    for (int i = 0; i <= amount; i++) {
      dp[i] = INT_MAX;
    }
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
      for (int j = 0; j < n; j++) {
        int curCoin = coins[j];
        if (i >= curCoin && dp[i - curCoin] != INT_MAX) {
          dp[i] = min(dp[i], dp[i - curCoin] + 1);
        }
      }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
  }
};

// O(n ^ 2) - dp recursion
class Solution {
 public:
  int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();

    vector<int> ar(amount, -1);

    std::function<int(int)> dp = [&](int cur) {
      if (cur > amount) return (int)1e9;
      if (cur == amount) return 0;
      if (ar[cur] != -1) {
        return ar[cur];
      }

      int res = INT_MAX;
      for (int i = 0; i < n; i++) {
        if (coins[i] < (int)1e5) {
          res = min(dp(cur + coins[i]) + 1, res);
        }
      }
      return ar[cur] = res;
    };

    int ans = dp(0);
    if (ans > (int)1e9) {
      return -1;
    }
    return ans;
  }
};