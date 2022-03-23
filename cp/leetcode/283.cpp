//https://leetcode.com/problems/move-zeroes/

// O(n) - some genius method
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int countNotZero = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                countNotZero++;
                nums[countNotZero - 1] = nums[i];
            }
        }
        
        for (int i = countNotZero; i < n; i++) {
            nums[i] = 0;
        }
        
    }
};

// O(n log n) - stable_partition
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stable_partition(nums.begin(), nums.end(), [](int a) {
            return a != 0;
        });
    }
};

// O(n log n) - stable_sort
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stable_sort(nums.begin(), nums.end(), [](int a, int b) {
            if (a == 0) {
                return false;
            }
            if (b == 0) {
                return true;
            }
            return false;
        });
    }
};