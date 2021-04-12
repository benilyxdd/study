//https://leetcode.com/problems/sort-colors/

// O(nlogn) - using stl library
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};