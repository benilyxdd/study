// https://leetcode.com/problems/regular-expression-matching/

// O(n ^ 2) - dp
class Solution {
 public:
  bool isMatch(string s, string p) {
    int n = s.length();
    int m = p.length();
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= m; i++) {
      if (p[i - 1] == '*' && dp[0][i - 2]) {
        dp[0][i] = true;
      }
    }

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
          dp[i][j] = dp[i - 1][j - 1];
        }
        if (p[j - 1] == '*') {
          if (p[j - 2] != s[i - 1] && p[j - 2] != '.') {
            dp[i][j] = dp[i][j - 2];
          } else {
            dp[i][j] = (dp[i][j - 1] || dp[i - 1][j] || dp[i][j - 2]);
          }
        }
      }
    }

    return dp[n][m];
  }
};

// O(n ^ 2) - recursion
class Solution {
 public:
  bool isMatch(string s, string p) {
    int n = s.length();
    int m = p.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    std::function<int(int, int)> dfs = [&](int i, int j) {
      if (dp[i][j] != -1) return dp[i][j];
      if (i >= n && j >= m) return 1;
      if (j >= m) return 0;

      bool match = i < n && (s[i] == p[j] || p[j] == '.');
      if (j + 1 < m && p[j + 1] == '*') {
        dp[i][j] = dfs(i, j + 2) || (match && dfs(i + 1, j));
        return dp[i][j];
      }

      if (match) {
        dp[i][j] = dfs(i + 1, j + 1);
        return dp[i][j];
      }

      dp[i][j] = 0;
      return 0;
    };
    return dfs(0, 0);
  }
};

// O(?) - some cheaty ways lol
class Solution {
 public:
  bool isMatch(string s, string p) { return regex_match(s, regex(p)); }
};