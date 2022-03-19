// https://leetcode.com/problems/permutations/

// O(n!) - all premutation - using stl library
class Solution {
 public:
  vector<vector<int>> permute(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ar;
    do {
      ar.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return ar;
  }
};