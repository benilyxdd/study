//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

// O(n log(1e9)) - binary search
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int n = weights.size();
        int lo = 1, hi = (int)1e9 + 7;
        
        auto ok = [&] (int mid) {
            int x = 0;
            for (int i = 0; i < D; i++) {
                int mx = mid;
                while ((mx -= weights[x]) >= 0) {
                    x++;
                    if (x == n) {
                        return true;
                    }
                }
            }
            return false;
        };
        
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (ok(mid)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};