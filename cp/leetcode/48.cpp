// https://leetcode.com/problems/rotate-image/

// O(n ^ 2) - loop
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ar(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ar[i][j] = matrix[n - j - 1][i];
            }
        }
        
        matrix = ar;
    }
};