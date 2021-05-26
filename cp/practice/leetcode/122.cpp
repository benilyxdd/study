//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

// O(n) - buy valley and sell peak
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int n = prices.size();
        
        for (int i = 0; i < n; i++) {
            int lo, hi;
            
            while (i < n-1 && prices[i] >= prices[i + 1]) {
                i++;
            }
            lo = prices[i];
            
            while (i < n-1 && prices[i] <= prices[i + 1]) {
                i++;
            }
            hi = prices[i];
            mx += hi - lo;
        }
        
        return mx;
    }
};