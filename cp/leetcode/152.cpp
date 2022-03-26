// https://leetcode.com/problems/maximum-product-subarray/

// O(n) - dp
class Solution {
 public:
  int maxProduct(vector<int>& nums) {
    int n = nums.size();
    vector<array<int, 2>> dp(n, array<int, 2>());
    dp[0][0] = dp[0][1] = nums[0];
    for (int i = 1; i < n; i++) {
      dp[i][0] = max({dp[i - 1][0] * nums[i], dp[i - 1][1] * nums[i], nums[i]});
      dp[i][1] = min({dp[i - 1][0] * nums[i], dp[i - 1][1] * nums[i], nums[i]});
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
      mx = max(mx, dp[i][0]);
    }
    return mx;
  }
};