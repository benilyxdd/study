// https://leetcode.com/problems/shift-2d-grid/

// O(n * m) - loop
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int total = n * m;
        int start = (total - k % total) % total;
        vector<vector<int>> ans(n, vector<int>(m));
        if (start == 0) return grid;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++, start = (start + 1) % total) {
                int x = (start == 0 ? 0 : start / m);
                int y = start % m;
                ans[i][j] = grid[x][y];
            }
        }
        
        return ans;
    }
};