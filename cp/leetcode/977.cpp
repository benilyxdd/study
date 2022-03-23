//https://leetcode.com/problems/squares-of-a-sorted-array/

// O(n) - two pointers
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int lo = 0, hi = n - 1;
        for (int i = 0; i < n; i++) {
            if (abs(nums[lo]) > abs(nums[hi])) {
                ans[n - i - 1] = nums[lo] * nums[lo++];
            } else {
                ans[n - i - 1] = nums[hi] * nums[hi--];
            }
        }
        
        return ans;
    }
};


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