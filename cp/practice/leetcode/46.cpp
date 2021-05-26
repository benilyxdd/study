//https://leetcode.com/problems/permutations/

// O(n!) - all premutation - using stl library
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};