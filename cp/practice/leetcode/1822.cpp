// https://leetcode.com/problems/sign-of-the-product-of-an-array/

// O(n) - loop
class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool neg = false;
        for (int &num : nums) {
            if (num < 0) {
                neg = !neg;
            } else if (num == 0) {
                return 0;
            }
        }
        return (neg ? -1 : 1);
    }
};