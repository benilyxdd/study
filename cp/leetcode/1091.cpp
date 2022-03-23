// https://leetcode.com/problems/shortest-path-in-binary-matrix/

// O(n ^ 2) - bfs
class Solution {
 public:
  vector<vector<int>> dirs = {{-1, 0},  {1, 0},  {0, -1}, {0, 1},
                              {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

  int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    int n = grid.size(), res = INT_MAX;
    if (grid[0][0] || grid[n - 1][n - 1]) return -1;

    queue<pair<int, int>> q;  // i, j, cnt;
    q.push({0, 0});
    grid[0][0] = 1;
    while (!q.empty()) {
      auto [i, j] = q.front();
      if (i == n - 1 && j == n - 1) {
        return grid[i][j];
      }

      for (vector<int>& dir : dirs) {
        int new_i = i + dir[0];
        int new_j = j + dir[1];
        if (new_i >= 0 && new_j >= 0 && new_i < n && new_j < n &&
            grid[new_i][new_j] == 0) {
          q.push({new_i, new_j});
          grid[new_i][new_j] = grid[i][j] + 1;
        }
      }
      q.pop();
    }
    return -1;
  }
};