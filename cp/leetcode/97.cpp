// https://leetcode.com/problems/interleaving-string/

// O(n * m) - dp
class Solution {
 public:
  bool isInterleave(string s1, string s2, string s3) {
    int n = s1.length(), m = s2.length();
    if (n + m != s3.length()) return false;
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
    dp[n][m] = true;

    for (int i = n; i >= 0; i--) {
      for (int j = m; j >= 0; j--) {
        if (i < n && dp[i + 1][j] && s1[i] == s3[i + j]) {
          dp[i][j] = true;
        }

        if (j < m && dp[i][j + 1] && s2[j] == s3[i + j]) {
          dp[i][j] = true;
        }
      }
    }
    return dp[0][0];
  }
};

// O(n * m) - recursion
class Solution {
 public:
  bool isInterleave(string s1, string s2, string s3) {
    int n = s1.length(), m = s2.length(), k = s3.length();
    if (n + m != k) return false;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    std::function<int(int, int)> backtrack = [&](int i, int j) {
      int cur = i + j;
      if (i == n && j == m) return 1;

      if (dp[i][j] != -1) return dp[i][j];

      if (i < n && s1[i] == s3[cur] && backtrack(i + 1, j)) {
        return 1;
      }
      if (j < m && s2[j] == s3[cur] && backtrack(i, j + 1)) {
        return 1;
      }
      dp[i][j] = 0;
      return 0;
    };

    return backtrack(0, 0);
  }
};