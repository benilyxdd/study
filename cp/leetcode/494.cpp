// https://leetcode.com/problems/target-sum/

// O(n * n) - backtracking
class Solution {
 public:
  int findTargetSumWays(vector<int>& nums, int target) {
    map<pair<int, int>, int> m;
    int n = nums.size();

    std::function<int(int, int)> backtrack = [&](int i, int total) {
      if (i == n) {
        return (int)(target == total);
      }
      if (m.count({i, total})) {
        return m[{i, total}];
      }

      m[{i, total}] =
          backtrack(i + 1, total + nums[i]) + backtrack(i + 1, total - nums[i]);

      return m[{i, total}];
    };
    return backtrack(0, 0);
  }
};