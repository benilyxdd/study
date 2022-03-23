// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

// O(n ^ 2) - loop
class Solution {
 public:
  int sumOddLengthSubarrays(vector<int>& arr) {
    int ans = 0, n = arr.size();
    vector<int> prefix;
    prefix.push_back(0);
    for (int i = 0; i < n; i++) {
      prefix.push_back(prefix[i] + arr[i]);
    }
    for (int i = 1; i <= n; i += 2) {
      for (int j = i - 1; j < n; j++) {
        ans += prefix[j + 1] - prefix[j - i + 1];
      }
    }
    return ans;
  }
};