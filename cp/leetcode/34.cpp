// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// O(log n) - binary search
class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    if (nums.size() == 0) return {-1, -1};
    vector<int> ans;
    int n = nums.size();

    int lo = 0, hi = n - 1;
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;
      if (nums[mid] >= target) {
        hi = mid;
      } else {
        lo = mid + 1;
      }
    }
    if (nums[lo] != target) return {-1, -1};
    ans.push_back(lo);

    hi = n - 1;
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2 + 1;
      if (nums[mid] > target) {
        hi = mid - 1;
      } else {
        lo = mid;
      }
    }
    if (nums[lo] != target) return {-1, -1};
    ans.push_back(lo);

    return ans;
  }
};

// O(log n) - lower_bound && upper_bound
class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    auto it = lower_bound(nums.begin(), nums.end(), target);
    auto it2 = upper_bound(nums.begin(), nums.end(), target);

    if (it == nums.end() || *it != target) {
      vector<int> res = {-1, -1};
      return res;
    }

    it2--;
    vector<int> res = {int(it - nums.begin()), int(it2 - nums.begin())};
    return res;
  }
};
;