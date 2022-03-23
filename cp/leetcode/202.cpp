// https://leetcode.com/problems/happy-number/

// O(?) - Floyd Cycle detection algorithm
class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        
        auto digitSquareSum = [](int x) {
            int sum = 0;
            while (x > 0) {
                int rem = x % 10;
                sum += rem * rem;
                x /= 10;
            }
            return sum;
        };
        
        do {
            slow = digitSquareSum(slow);
            fast = digitSquareSum(fast);
            fast = digitSquareSum(fast);
        } while (slow != fast);
        if (slow == 1) return true;
        return false;
    }
};

// O(?) - check unitl it equal to 1 or has duplication
class Solution {
public:
    bool isHappy(int n) {
        set<int> met;
        while (true) {
            int copy = n;
            int total = 0;
            while (copy > 0) {
                int rem = copy % 10;
                total += rem * rem;
                copy /= 10;
            }
            if (n == 1) {
                return true;
            }
            n = total;
            if (met.find(n) != met.end()) {
                return false;
            }
            met.insert(n);
        } 
    }
};