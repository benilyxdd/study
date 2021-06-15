// https://leetcode.com/problems/valid-sudoku/

// O(n ^ 2) - ...
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& ar) {
        vector<vector<int>> a(9, vector<int>(9, 0)), b(9, vector<int>(9, 0)), c(9, vector<int>(9, 0));
        for (int i = 0; i < ar.size(); i++) {
            for (int j = 0; j < ar[i].size(); j++) {
                if (ar[i][j] != '.') {
                    int num = ar[i][j] - '0' - 1;
                    int k = i / 3 * 3 + j / 3;
                    if (a[i][num] || b[j][num] || c[k][num]) {
                        return false;
                    }
                    a[i][num] = b[j][num] = c[k][num] = 1;
                }
            }
        }
        return true;
    }
};