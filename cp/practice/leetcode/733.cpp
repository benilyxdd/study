// https://leetcode.com/problems/flood-fill/

// O(n) - dfs
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int targetColor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        vector<vector<bool>> visited(n, vector<bool> (m, false));
        dfs(visited, image, targetColor, newColor, sr, sc, n, m);
        return image;
    }
    
    void dfs(vector<vector<bool>> &visited, vector<vector<int>> &image, int &target, int newColor, int x, int y, int n, int m) {
        // cout << x << ' ' << y << '\n';
        
        image[x][y] = newColor;
        visited[x][y] = true;
        
        if (x + 1 < n && !visited[x + 1][y] && image[x + 1][y] == target) {
            dfs(visited, image, target, newColor, x + 1, y, n, m);
        }
        
        if (y + 1 < m && !visited[x][y + 1] && image[x][y + 1] == target) {
            dfs(visited, image, target, newColor, x, y + 1, n, m);
        }        
        
        if (x - 1 >= 0 && !visited[x - 1][y] && image[x - 1][y] == target) {
            dfs(visited, image, target, newColor, x - 1, y, n, m);
        }
        
        if (y - 1 >= 0 && !visited[x][y - 1] && image[x][y -1] == target) {
            dfs(visited, image, target, newColor, x, y - 1, n, m);
        }
    }
};