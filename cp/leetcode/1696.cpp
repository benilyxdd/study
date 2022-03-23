//https://leetcode.com/problems/jump-game-vi/

// O(n log k) - dp + log k insert && extract
class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n, -1e9);
        multiset<int> ms;
        
        dp[0] = nums[0];
        ms.insert(dp[0]);
        
        for (int i = 1; i < n; i++) {
            if (ms.size() > k) {
                auto it = ms.find(dp[i - k - 1]);
                ms.erase(it);
            }
            dp[i] = max(dp[i], *(--ms.end()) + nums[i]);
            ms.insert(dp[i]);
        }
        
        return dp[n - 1];
    }
};