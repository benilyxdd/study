//https://leetcode.com/problems/next-permutation/

// O(n) - linear in half the distance - using stl library
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};