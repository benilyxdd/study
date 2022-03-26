// https://leetcode.com/problems/maximal-square/

// O(n * m) - dp
class Solution {
 public:
  int maximalSquare(vector<vector<char>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = n - 1; i >= 0; i--) {
      for (int j = m - 1; j >= 0; j--) {
        if (matrix[i][j] == '1') {
          dp[i][j] = min({dp[i + 1][j + 1], dp[i + 1][j], dp[i][j + 1]}) + 1;
        }
      }
    }

    int mx = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        mx = max(mx, dp[i][j]);
      }
    }

    return mx * mx;
  }
};