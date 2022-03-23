//https://leetcode.com/problems/number-of-closed-islands/

// O(n * m) - dfs
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 0 && !visited[i][0]) {
                flood(grid, visited, i, 0, n, m);
            }
            if (grid[i][m - 1] == 0 && !visited[i][m - 1]) {
                flood(grid, visited, i, m - 1, n, m);
            }
        }
        
        for (int i = 0; i < m; i++) {
            if (grid[0][i] == 0 && !visited[0][i]) {
                flood(grid, visited, 0, i, n, m);
            }
            if (grid[n - 1][i] == 0 && !visited[n - 1][i]) {
                flood(grid, visited, n - 1, i, n, m);
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] == 0) {
                    ans += dfs(grid, visited, i, j, n, m);
                }
            }
        }

        return ans;
    }
    
    void flood(vector<vector<int>> &grid, vector<vector<bool>> &visited, int i, int j, int n, int m) {
        if (i >= n || i < 0 || j >= m || j < 0 || grid[i][j] != 0) {
            return;
        }

        visited[i][j] = true;
        grid[i][j] = 1;

        flood(grid, visited, i + 1, j, n , m);
        flood(grid, visited, i - 1, j, n , m);
        flood(grid, visited, i, j + 1, n , m);
        flood(grid, visited, i, j - 1, n , m);
    }
    
    bool dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int i, int j, int n, int m) {
        visited[i][j] = true;
        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
            return false;
        }
        
        bool ans = true;
        if (i + 1 < n && grid[i + 1][j] == 0 && !visited[i + 1][j]) {
            ans = ans && dfs(grid, visited, i + 1, j, n, m);
        }
        
        if (i - 1 >= 0 && grid[i - 1][j] == 0 && !visited[i - 1][j]) {
            ans = ans && dfs(grid, visited, i - 1, j, n, m);
        }
        
        if (j + 1 < m && grid[i][j + 1] == 0 && !visited[i][j + 1]) {
            ans = ans && dfs(grid, visited, i, j + 1, n, m);
        } 
        
        if (j - 1 >= 0 && grid[i][j - 1] == 0 && !visited[i][j - 1]) {
            ans = ans && dfs(grid, visited, i, j - 1, n, m);
        }
        
        return ans;
    }
};