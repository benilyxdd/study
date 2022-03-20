// https://leetcode.com/problems/verifying-an-alien-dictionary/

// O(n log n) - sort with cmp
class Solution {
 public:
  bool isAlienSorted(vector<string>& words, string order) {
    map<char, int> mp;
    int k = words.size();
    for (int i = 0; i < 26; i++) {
      mp[order[i]] = i + 1;
    }

    auto cmp = [&mp](const string a, const string b) {
      int n = a.length();
      int m = b.length();
      for (int i = 0; i < min(n, m); i++) {
        if (a[i] != b[i]) {
          return mp[a[i]] < mp[b[i]];
        }
      }
      return n < m;
    };

    vector<string> new_words(words.begin(), words.end());
    sort(new_words.begin(), new_words.end(), cmp);
    for (int i = 0; i < k; i++) {
      if (new_words[i] != words[i]) {
        return false;
      }
    }
    return true;
  }
};