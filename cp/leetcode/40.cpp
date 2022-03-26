// https://leetcode.com/problems/combination-sum-ii/

// O(?)
class Solution {
 public:
  vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<int> r;
    vector<vector<int>> ans;

    std::function<void(vector<int>, int, int)> dfs = [&](vector<int> vec, int t,
                                                         int i) {
      if (t == 0) {
        ans.push_back(vec);
        return;
      }

      for (int j = i; j < n; j++) {
        if (j && nums[j] == nums[j - 1] && j > i) continue;
        if (t - nums[j] >= 0) {
          vec.push_back(nums[j]);
          dfs(vec, t - nums[j], j + 1);
          vec.pop_back();
        }
      }
    };
    dfs(r, target, 0);
    return ans;
  }
};