// https://leetcode.com/problems/game-of-life/

// O(n * m) - loop
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> ar(n, vector<int>(m));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int countLive = 0;
                countLive += (i > 0 && j > 0 && board[i - 1][j - 1]);
                countLive += (i > 0 && board[i - 1][j]);
                countLive += (i > 0 && j < m - 1 && board[i - 1][j + 1]);
                countLive += (j > 0 && board[i][j - 1]);
                countLive += (j < m - 1 && board[i][j + 1]);
                countLive += (i < n - 1 && j > 0 && board[i + 1][j - 1]);
                countLive += (i < n - 1 && board[i + 1][j]);
                countLive += (i < n - 1 && j < m - 1 && board[i + 1][j + 1]);
                
                if (board[i][j] == 0 && countLive == 3) ar[i][j] = 1;
                if (board[i][j] == 1) {
                    ar[i][j] = (countLive >= 2 && countLive <= 3);
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                board[i][j] = ar[i][j];
            }
        }
    }
};