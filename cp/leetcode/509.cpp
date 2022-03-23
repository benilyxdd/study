// https://leetcode.com/problems/fibonacci-number/

// O(n)
class Solution {
public:
    int fib(int n) {
        vector<int> dp(40);
        dp[0] = 0;
        dp[1] = dp[2] = 1;
        for (int i = 3; i < 40; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

// O(n ^ 2)
class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1) return n;
        return fib(n - 2) + fib(n - 1);
    }
};