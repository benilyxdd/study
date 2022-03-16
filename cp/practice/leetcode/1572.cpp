// https://leetcode.com/problems/matrix-diagonal-sum/

// O(n) - ez question as well
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0, n = mat.size();
        for (int i = 0; i < n; i++) {
            ans += mat[i][i];
            ans += mat[n - i - 1][i];
        }
        if (n & 1) {
            ans -= mat[n / 2][n / 2];
        }
        return ans;
    }
};