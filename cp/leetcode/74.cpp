// https://leetcode.com/problems/search-a-2d-matrix/

// O(log (n * m)) - binary search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int lo = 0, hi = n * m - 1;
        while (lo != hi) {
            int mid = lo + (hi - lo) / 2;
            int row = mid / m;
            int col = mid % m;
            if (matrix[row][col] >= target) {
                hi = mid;
            } else if (matrix[row][col] < target) {
                lo = mid + 1;
            }
        }
        return matrix[lo / m][lo % m] == target;
    }
};