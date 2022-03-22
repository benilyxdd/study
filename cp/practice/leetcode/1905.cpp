// https://leetcode.com/problems/count-sub-islands/

// O(n * m) - dfs

class Solution {
 public:
  int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2) {
    int cnt = 0, n = grid1.size(), m = grid1[0].size();

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid2[i][j]) {
          cnt += dfs(grid1, grid2, i, j, n, m);
        }
      }
    }
    return cnt;
  }

  int dfs(vector<vector<int>> &grid1, vector<vector<int>> &grid2, int i, int j,
          int &n, int &m) {
    if (i < 0 || i == n || j < 0 || j == m || grid2[i][j] == 0) return 1;
    grid2[i][j] = 0;
    int res = 1;
    res &= dfs(grid1, grid2, i + 1, j, n, m);
    res &= dfs(grid1, grid2, i - 1, j, n, m);
    res &= dfs(grid1, grid2, i, j + 1, n, m);
    res &= dfs(grid1, grid2, i, j - 1, n, m);
    return res & grid1[i][j];
  }
};