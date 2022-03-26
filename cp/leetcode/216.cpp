// https://leetcode.com/problems/combination-sum-iii/

// O(?) - backtracking
class Solution {
 public:
  vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> temp;
    vector<vector<int>> ans;

    std::function<void(vector<int>, int, int)> dfs = [&](vector<int> vec,
                                                         int target, int i) {
      if (target == 0 && vec.size() == k) {
        ans.push_back(vec);
        return;
      }

      for (int j = i; j < 9; j++) {
        if (j && nums[j] == nums[j - 1] && j > i) continue;
        if (target - nums[j] >= 0) {
          vec.push_back(nums[j]);
          dfs(vec, target - nums[j], j + 1);
          vec.pop_back();
        }
      }
    };
    dfs(temp, n, 0);
    return ans;
  }
};