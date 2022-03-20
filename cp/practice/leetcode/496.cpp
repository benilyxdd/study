// https://leetcode.com/problems/next-greater-element-i/

// O(n * m) - brute force
class Solution {
 public:
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    int n = nums1.size(), m = nums2.size();
    for (int i = 0; i < n; i++) {
      int cur = nums1[i];
      bool found = false, done = false;
      for (int j = 0; j < m; j++) {
        if (!found) {
          if (nums2[j] == cur) {
            found = true;
          }
        } else {
          if (nums2[j] > cur && !done) {
            ans.push_back(nums2[j]);
            done = true;
          }
        }
      }
      if (!done) {
        ans.push_back(-1);
      }
    }
    return ans;
  }
};