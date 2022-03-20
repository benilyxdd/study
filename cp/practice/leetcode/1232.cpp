// https://leetcode.com/problems/check-if-it-is-a-straight-line/

// O(n) - check sloop
class Solution {
 public:
  bool checkStraightLine(vector<vector<int>>& c) {
    int x1 = c[0][0], y1 = c[0][1];
    int x2 = c[1][0], y2 = c[1][1];
    int dx = x2 - x1;
    int dy = y2 - y1;

    for (auto& x : c) {
      if (dx * (x[1] - y2) != dy * (x[0] - x2)) {
        return false;
      }
    }
    return true;
  }
};