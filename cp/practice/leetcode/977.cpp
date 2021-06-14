//https://leetcode.com/problems/squares-of-a-sorted-array/

// O(n log n) - loop + sort
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int &x : nums) {
            x *= x;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};