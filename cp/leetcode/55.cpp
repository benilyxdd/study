// https://leetcode.com/problems/jump-game/

// O(n) - same as below but from back to front
class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int n = nums.size();
    int cur = n, mx = n - 1;
    while (cur--) {
      int now = nums[cur];
      if (cur + now >= mx) {
        mx = cur;
      }
    }
    return mx == 0;
  }
};

// O(n) - keep updating farthest jump possible
class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int i = 0, n = nums.size();
    for (int j = 0; i < n && i <= j; i++) {
      j = max(i + nums[i], j);
    }
    return (i == n);
  }
};

// O(n * m) - n -> length of vector, m -> max jump - just iteration
class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
      return true;
    }
    int dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = nums[0];
    for (int i = 0; i < n; i++) {
      if (dp[i] > 0) {
        for (int j = 0; j < nums[i]; j++) {
          if (j + i + 1 < n) {
            dp[j + i + 1] = true;
          }
        }
      }
    }
    return dp[n - 1];
  }
};