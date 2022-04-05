// https://leetcode.com/problems/3sum/

// O(n ^ 2) - fixed 1 num & two sum
class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n; i++) {
      int target = -nums[i];
      int lo = i + 1;
      int hi = n - 1;

      while (lo < hi) {
        int sum = nums[lo] + nums[hi];

        if (sum < target) {
          lo++;
        } else if (sum > target) {
          hi--;
        } else {
          vector<int> temp = {nums[i], nums[lo], nums[hi]};
          ans.push_back(temp);
          while (lo < hi && nums[lo] == temp[1]) {
            lo++;
          }
          while (lo < hi && nums[hi] == temp[2]) {
            hi--;
          }
        }
      }

      while (i + 1 < n && nums[i + 1] == nums[i]) {
        i++;
      }
    }

    return ans;
  }
};