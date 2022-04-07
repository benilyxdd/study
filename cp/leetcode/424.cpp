// https://leetcode.com/problems/longest-repeating-character-replacement/

// O(n) - sliding window
class Solution {
 public:
  int characterReplacement(string s, int k) {
    vector<int> cnt(26, 0);
    int ans = 0, n = s.length();

    std::function<bool(int, int)> check = [&cnt, &k](int i, int j) {
      int mx = 0, length = j - i + 1;
      for (int i = 0; i < 26; i++) {
        mx = max(mx, cnt[i]);
      }
      return (length - mx <= k);
    };

    for (int i = 0, j = 0; j < n; j++) {
      cnt[s[j] - 'A']++;
      bool ok = check(i, j);
      while (!ok) {
        cnt[s[i] - 'A']--;
        i++;
        ok = check(i, j);
      }
      ans = max(ans, j - i + 1);
    }

    return ans;
  }
};