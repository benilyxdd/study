//https://leetcode.com/problems/remove-element/

// O(n log n) - sort & iteratio;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for (int& x : nums) {
            if (x != val) {
                cnt++;
            } else {
                x = 0;
            }
        }
        sort(nums.rbegin(), nums.rend());
        return cnt;
    }
};