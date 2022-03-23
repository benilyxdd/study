// https://leetcode.com/problems/max-area-of-island/

// O(n * m) - dfs
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] == 1) {
                    int value = dfs(grid, visited, i, j, n, m);
                    ans = max(ans, value);
                }
            }
        }
        return ans;
    }
    
    int dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int i, int j, int n, int m) {
        if (i == n || i < 0 || j == m || j < 0 || grid[i][j] == 0 || visited[i][j]) {
            return 0;
        }
        visited[i][j] = true;
        
        int ans = 1;
        ans += dfs(grid, visited, i + 1, j, n, m);
        ans += dfs(grid, visited, i - 1, j, n, m);
        ans += dfs(grid, visited, i, j + 1, n, m);
        ans += dfs(grid, visited, i, j - 1, n, m);
        return ans;
    }
};