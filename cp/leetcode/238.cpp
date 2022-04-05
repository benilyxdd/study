// https://leetcode.com/problems/product-of-array-except-self/

// O(n) - loop
class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> pre(n);
    pre[0] = nums[0];
    int cnt = 0;
    for (int i = 1; i < n; i++) {
      cnt += nums[i] == 0;
      pre[i] = pre[i - 1] * (nums[i] == 0 ? 1 : nums[i]);
    }

    if (cnt > 1) return vector<int>(n, 0);

    vector<int> ans;
    for (int i = 0; i < n; i++) {
      ans.push_back(nums[i] == 0 ? pre[n - 1]
                    : cnt > 0    ? 0
                                 : pre[n - 1] / nums[i]);
    }
    return ans;
  }
};