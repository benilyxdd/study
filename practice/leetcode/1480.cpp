//https://leetcode.com/problems/running-sum-of-1d-array/

// O(n) - using stl library
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(nums.begin(), nums.end(), nums.begin());
        return nums;
    }
};