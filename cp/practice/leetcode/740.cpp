// https://leetcode.com/problems/delete-and-earn/

// O(mxN) - dp
class Solution {
 public:
  int deleteAndEarn(vector<int>& nums) {
    int mxN = 10001;
    vector<int> ar(mxN, 0), dp(mxN, 0);
    for (int& x : nums) {
      ar[x] += x;
    }
    dp[0] = ar[0];
    dp[1] = ar[1];
    for (int i = 2; i < mxN; i++) {
      dp[i] = max(dp[i - 2] + ar[i], dp[i - 1]);
    }
    return dp[mxN - 1];
  }
};