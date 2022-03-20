// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

// O(|s|) - loop
class Solution {
 public:
  string freqAlphabets(string s) {
    string ans;
    int n = s.length();
    for (int i = 0; i < n; i++) {
      if (i < n - 2 && s[i + 2] == '#') {
        ans += char(stoi(s.substr(i, 2)) + 96);
        i += 2;
      } else {
        ans += char(s[i] - '0' + 96);
      }
    }
    return ans;
  }
};