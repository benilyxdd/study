// https://leetcode.com/problems/longest-increasing-subsequence/

// O(n log n) - loop w/ lower_bound
class Solution {
 public:
  int lengthOfLIS(vector<int>& nums) {
    vector<int> ans;
    for (int& x : nums) {
      auto it = lower_bound(ans.begin(), ans.end(), x);
      if (it == ans.end())
        ans.push_back(x);
      else
        *it = x;
    }
    return ans.size();
  }
};

// O(n ^ 2) - literally find all possibility
class Solution {
 public:
  int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++) {
      dp[i] = 1;
      for (int j = 0; j < i; j++) {
        if (nums[i] > nums[j]) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
    }

    return *max_element(dp.begin(), dp.end());
  }
};