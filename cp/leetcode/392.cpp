// https://leetcode.com/problems/is-subsequence/

// O(n) - loop
class Solution {
 public:
  bool isSubsequence(string s, string t) {
    int n = s.length(), m = t.length();
    int i, j;
    for (i = 0, j = 0; j < m; j++) {
      if (s[i] == t[j]) {
        i++;
      }
    }
    if (i != n) return false;
    return true;
  }
};