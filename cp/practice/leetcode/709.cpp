// https://leetcode.com/problems/to-lower-case/

// O(|s|) - loop
class Solution {
 public:
  string toLowerCase(string s) {
    for (char &ch : s) {
      if (ch >= 'A' && ch <= 'Z') {
        ch += 32;
      }
    }
    return s;
  }
};