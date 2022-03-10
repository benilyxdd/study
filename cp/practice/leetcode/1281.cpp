// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

// O(log n)
class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1, sum = 0;
        while (n > 0) {
            int x = n % 10;
            sum += x;
            pro *= x;
            n /= 10;
        }
        return pro - sum;
    }
};