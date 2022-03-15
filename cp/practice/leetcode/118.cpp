// https://leetcode.com/problems/pascals-triangle/

// O(30 * 30)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows, vector<int>());
        int tri[30][30];
        memset(tri, 0, sizeof(tri));
        for (int i = 0; i < 30; i++) {
            tri[i][0] = 1;
            tri[i][i] = 1;
        }
        for (int i = 1; i < 30; i++) {
            for (int j = 1; j < i; j++) {
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
            }
        }
        
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                ans[i].push_back(tri[i][j]);
            }
        }
        return ans;
    }
};