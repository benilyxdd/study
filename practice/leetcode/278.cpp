//https://leetcode.com/problems/first-bad-version/

// O(log n) - binary search
class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 1, hi = n;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            bool ask = isBadVersion(mid);
            if (ask) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};