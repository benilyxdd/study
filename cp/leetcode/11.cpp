// https://leetcode.com/problems/container-with-most-water/

// O(n) - two pointers & greedy
class Solution {
 public:
  int maxArea(vector<int>& height) {
    int n = height.size();

    int lo = 0, hi = n - 1;
    int mx = 0;
    while (lo < hi) {
      int range = hi - lo;
      mx = max(mx, min(height[lo], height[hi]) * range);

      if (height[lo] < height[hi]) {
        lo++;
      } else {
        hi--;
      }
    }
    return mx;
  }
};