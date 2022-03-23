// https://leetcode.com/problems/as-far-from-land-as-possible/

// O(n ^ 2) - dp
class Solution {
 public:
  int maxDistance(vector<vector<int>>& grid) {
    int mx = -1, n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 0) {
          dp[i][j] = 1;
        }
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 0) {
          int top = i > 0 ? dp[i - 1][j] : (int)1e5;
          int left = j > 0 ? dp[i][j - 1] : (int)1e5;

          dp[i][j] = min(top, left) + 1;
        }
      }
    }

    for (int i = n - 1; i >= 0; i--) {
      for (int j = n - 1; j >= 0; j--) {
        if (grid[i][j] == 0) {
          int bottom = i < n - 1 ? dp[i + 1][j] : (int)1e5;
          int right = j < n - 1 ? dp[i][j + 1] : (int)1e5;

          dp[i][j] = min({dp[i][j], bottom + 1, right + 1});
        }
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 0) {
          mx = max(mx, dp[i][j]);
        }
      }
    }
    return mx >= 1e5 ? -1 : mx;
  }
};