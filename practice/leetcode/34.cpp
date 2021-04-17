//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// O(log n) - lower_bound && upper_bound
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        
        if (it == nums.end() || *it != target) {
            vector<int> res = {-1, -1};
            return res;
        }
        
        it2--;
        vector<int> res = {int(it - nums.begin()), int(it2 - nums.begin())};
        return res;
    }
};;