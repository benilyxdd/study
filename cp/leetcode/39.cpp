// https://leetcode.com/problems/combination-sum/

// O(k * 2 ^ n) - k is the average length of recursion depth - backtracking
class Solution {
 public:
  vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    vector<int> r;
    vector<vector<int>> ans;

    std::function<void(vector<int>, int, int)> dfs = [&](vector<int> vec, int t,
                                                         int i) {
      if (t == 0) {
        ans.push_back(vec);
        return;
      }

      while (i < n && t - nums[i] >= 0) {
        vec.push_back(nums[i]);

        dfs(vec, t - nums[i], i);
        i++;

        vec.pop_back();
      }
    };
    dfs(r, target, 0);

    return ans;
  }
};