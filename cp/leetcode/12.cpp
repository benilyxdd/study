// https://leetcode.com/problems/integer-to-roman/submissions/

// O(|num|) - hmm...
class Solution {
 public:
  string intToRoman(int num) {
    vector<string> sym = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                          "XL", "X",  "IX", "V",  "IV", "I"};
    vector<int> vals = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string ans;
    while (num > 0) {
      for (int i = 0; i < 13; i++) {
        if (num >= vals[i]) {
          ans += sym[i];
          num -= vals[i];
          break;
        }
      }
    }
    return ans;
  }
};