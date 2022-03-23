// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

// O(1) - math
class Solution {
public:
    int countOdds(int low, int high) {
        if (low % 2 != high % 2) return (high - low) / 2 + 1;
        if (low % 2 == high % 2 && low & 1) return (high - low) / 2 + 1;
        return (high - low) / 2;
    }
};