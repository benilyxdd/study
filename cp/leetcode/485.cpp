//https://leetcode.com/problems/max-consecutive-ones/

// O(n) - loop
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, temp = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                temp++;
                ans = max(ans, temp);
            } else {
                temp = 0;
            }
        }
        return ans;
    }
};