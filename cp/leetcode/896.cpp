// https://leetcode.com/problems/monotonic-array/description/?envType=study-plan&id=programming-skills-ii

// O(n)
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool asc = true, desc = true;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            asc = asc & (nums[i] <= nums[i + 1]);
            desc = desc & (nums[i] >= nums[i + 1]);
        }
        return asc | desc;
    }
};

// O(n)
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool asc = nums.front() <= nums.back();
        int x = asc ? -1 : 1;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] * (-x) > nums[i + 1] * (-x)) {
                return false;
            }
        }
        return true;
    }
};