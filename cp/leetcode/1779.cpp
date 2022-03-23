// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/

// O(n) - simple loop & check
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn = -1, dis = INT_MAX;
        int n = points.size();
        for (int i = 0; i < n; i++) {
            if (x == points[i][0] || y == points[i][1]) {
                int x_abs = abs(points[i][0] - x);
                int y_abs = abs(points[i][1] - y);
                int dist = max(x_abs, y_abs);
                if (dist < dis) {
                    dis = dist;
                    mn = i;
                }
            }
        }
        return mn;
    }
};