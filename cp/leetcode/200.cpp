// https://leetcode.com/problems/number-of-islands/

// O(n) - dfs
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    ans++;
                    dfs(grid, visited, i, j, n, m);
                }
            }
        }
        return ans;
    }
    
    void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int i, int j, int n, int m) {
        visited[i][j] = true;
        
        if (i < n - 1 && !visited[i + 1][j] && grid[i + 1][j] == '1') dfs(grid, visited, i + 1, j, n, m);
        if (i > 0 && !visited[i - 1][j] && grid[i - 1][j] == '1') dfs(grid, visited, i - 1, j, n, m);
        if (j < m - 1 && !visited[i][j + 1] && grid[i][j + 1] == '1') dfs(grid, visited, i, j + 1, n, m);
        if (j > 0 && !visited[i][j - 1] && grid[i][j - 1] == '1') dfs(grid, visited, i, j - 1, n, m);
    }
};