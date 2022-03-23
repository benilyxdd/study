// https://leetcode.com/problems/reshape-the-matrix/

// O(r * c) - loop
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if (r * c != n * m) {
            return mat;
        }
        vector<vector<int>> ans(r, vector<int>(c, -1));
        
        int j = 0, k = 0;
        for (vector<int> &vec : mat) {
            for (int &x : vec) {
                ans[j][k] = x;
                k++;
                if (k == c) {
                    k = 0, j++;
                }
            }
        }
        return ans;
    }
};