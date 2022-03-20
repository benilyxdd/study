// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/

// O(n log n) - sort & cmp
class Solution {
 public:
  vector<int> sortByBits(vector<int>& arr) {
    auto cmp = [](int a, int b) {
      int cnt = 0, cnt2 = 0;
      int a_copy = a, b_copy = b;
      while (a > 0) {
        cnt += a & 1;
        a /= 2;
      }
      while (b > 0) {
        cnt2 += b & 1;
        b /= 2;
      }
      if (cnt != cnt2) {
        return cnt < cnt2;
      }
      return a_copy < b_copy;
    };
    sort(arr.begin(), arr.end(), cmp);
    return arr;
  }
};