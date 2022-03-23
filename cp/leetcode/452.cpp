//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

// O(n) - sort accendingly according to end time
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        auto cmp = [&](vector<int>& a, vector<int>& b) {
            if (a[1] == b[1])
                return a[0] < b[0];
            return a[1] < b[1];
        };
        sort(points.begin(), points.end(), cmp);
        
        int cnt = 0;
        long long int last = (long long int)-INT_MAX - 10000;
        for (vector<int>& vec : points) {
            if (vec[0] > last) {
                cnt++;
                last = vec[1];
            }
        }
        return cnt;
    }
};