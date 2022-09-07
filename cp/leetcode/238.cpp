// https://leetcode.com/problems/product-of-array-except-self/

// O(n) - another loop with prefix and suffix
class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n), suffix(n);

    prefix[0] = nums[0];
    for (int i = 1; i < n; i++) {
      prefix[i] = prefix[i - 1] * nums[i];
    }

    suffix[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      suffix[i] = suffix[i + 1] * nums[i];
    }

    vector<int> res(n);
    res[0] = suffix[1];
    res[n - 1] = prefix[n - 2];
    for (int i = 1; i < n - 1; i++) {
      res[i] = prefix[i - 1] * suffix[i + 1];
    }

    return res;
  }
};

// O(n) - loop with prefix only
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