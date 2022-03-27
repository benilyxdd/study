// https://leetcode.com/problems/search-in-rotated-sorted-array/

// O(log n) - binary search
class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int n = nums.size();

    int lo = 0, hi = n;
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;
      int num = (target < nums[0] == nums[mid] < nums[0]) ? nums[mid]
                : target < nums[0]                        ? INT_MIN
                                                          : INT_MAX;

      if (num < target) {
        lo = mid + 1;
      } else if (num > target) {
        hi = mid;
      } else {
        return mid;
      }
    }
    return -1;
  }
};