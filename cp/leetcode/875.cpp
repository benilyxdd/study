//https://leetcode.com/problems/koko-eating-bananas/

// O(n log(max length)) - binary search
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int lo = 1, hi = (int)1e9 + 6;
        
        auto ok = [&] (int n) {
            int need = 0;
            for (int& x : piles) {
                need += (n + x - 1) / n;
            }
            return need <= h;
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