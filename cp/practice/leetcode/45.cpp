//https://leetcode.com/problems/jump-game-ii/

// o(n) - greedy
class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0, end = 0, far = 0, n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            far = max(far, i + nums[i]);
            if (i == end) {
                ans++;
                end = far;
            }
        }
        return ans;
    }
};

// O(n ^ 2) - dp [almost tle]
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1e9);
        dp[0] = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nums[i]; j++) {
                if (i + j + 1< n) {
                    dp[i + j + 1] = min(dp[i + j + 1], dp[i] + 1);
                }
            }
        }
        
        return dp[n - 1];
    }
};