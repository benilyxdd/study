// https://leetcode.com/problems/rotting-oranges/

// O(n * m) - bfs (iterative)
class Solution {
 public:
  int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int mx = 0;

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    // int i, int j, int steps
    queue<tuple<int, int, int>> q;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 2) {
          q.push(tuple<int, int, int>{i, j, 0});
        }
      }
    }

    while (!q.empty()) {
      auto [i, j, steps] = q.front();
      q.pop();

      if (visited[i][j]) continue;
      visited[i][j] = true;
      mx = max(mx, steps);

      if (i > 0 && grid[i - 1][j] == 1 && !visited[i - 1][j]) {
        q.push({i - 1, j, steps + 1});
      }

      if (j > 0 && grid[i][j - 1] == 1 && !visited[i][j - 1]) {
        q.push({i, j - 1, steps + 1});
      }

      if (i < n - 1 && grid[i + 1][j] == 1 && !visited[i + 1][j]) {
        q.push({i + 1, j, steps + 1});
      }

      if (j < m - 1 && grid[i][j + 1] == 1 && !visited[i][j + 1]) {
        q.push({i, j + 1, steps + 1});
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 1 && !visited[i][j]) {
          return -1;
        }
      }
    }
    return mx;
  }
};