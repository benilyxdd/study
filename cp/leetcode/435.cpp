//https://leetcode.com/problems/non-overlapping-intervals/

// O(n) - sort the vec according to end time -> check next start >= end
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        auto cmp = [&](vector<int>& a, vector<int>& b) {
            if (a[1] == b[1])
                return a[0] < b[0];
            return a[1] < b[1];
        };
        sort(intervals.begin(), intervals.end(), cmp);
        
        int cnt = 0, last = -1000000;
        
        for (vector<int>& vec : intervals) {
            if (vec[0] < last) {
                cnt++;
            } else{
                last = vec[1];
            }
        }
        
        return cnt;
    }
};