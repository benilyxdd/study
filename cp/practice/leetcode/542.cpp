// https://leetcode.com/problems/01-matrix/

// O(n * m) - dp
class Solution {
 public:
  vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        dp[i][j] = mat[i][j];
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (mat[i][j] == 1) {
          int top = i > 0 ? dp[i - 1][j] : INT_MAX - 2;
          int left = j > 0 ? dp[i][j - 1] : INT_MAX - 3;

          dp[i][j] = min(top, left) + 1;
        }
      }
    }

    for (int i = n - 1; i >= 0; i--) {
      for (int j = m - 1; j >= 0; j--) {
        if (mat[i][j] == 1) {
          int bottom = i < n - 1 ? dp[i + 1][j] : INT_MAX - 4;
          int right = j < m - 1 ? dp[i][j + 1] : INT_MAX - 5;

          dp[i][j] = min({dp[i][j], bottom + 1, right + 1});
        }
      }
    }

    return dp;
  }
};