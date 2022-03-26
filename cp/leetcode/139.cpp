// https://leetcode.com/problems/word-break/

// O(n ^ 2) - dp iterative
class Solution {
 public:
  bool wordBreak(string s, vector<string>& wordDict) {
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[n] = true;

    for (int i = n - 1; i >= 0; i--) {
      for (string& st : wordDict) {
        int len = st.length();
        if (len <= n - i) {
          string cur = s.substr(i, len);
          if (cur == st) {
            dp[i] = dp[i] | dp[i + len];
          }
        }

        // break out if anyone word is true
        if (dp[i]) {
          break;
        }
      }
    }

    return dp[0];
  }
};