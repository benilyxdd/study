// /https://leetcode.com/problems/house-robber-ii/

// O(n) - dp
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        // edge case
        if (n == 1) {
            return nums[0];
        }
        
        auto cal = [&] (int a, int b) {
            int all = b - a + 1;
            // edge case 2
            if (all <= 0) {
                return -(int)1e6;
            }
            
            vector<int> dp(all + 1, 0);
            dp[1] = nums[a];
            
            for (int i = a + 1, j = 2; i <= b; i++, j++) {
                // dp[j - 1] = no rob, dp[j - 2] = rob
                dp[j] = max(dp[j - 1], dp[j - 2] + nums[i]);
            }
            return dp[all];
        };
        
        // three cases - without the middle one work as well (maybe)
        int mx = max({cal(0, n - 2), cal(1, n - 2), cal(1, n - 1)});
        return mx;
    }
};