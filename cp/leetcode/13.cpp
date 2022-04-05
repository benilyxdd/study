// https://leetcode.com/problems/roman-to-integer/

// O(n) - loop..
class Solution {
 public:
  int romanToInt(string s) {
    int n = s.length();
    map<char, int> mp;
    map<string, int> mp2;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    mp2["CM"] = 900;
    mp2["CD"] = 400;
    mp2["XC"] = 90;
    mp2["XL"] = 40;
    mp2["IX"] = 9;
    mp2["IV"] = 4;

    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (i < n - 1) {
        string temp = s.substr(i, 2);
        if (mp2.count(temp)) {
          ans += mp2[temp];
          i++;
          continue;
        }
      }
      ans += mp[s[i]];
    }

    return ans;
  }
};