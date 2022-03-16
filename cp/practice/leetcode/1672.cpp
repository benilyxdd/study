// https://leetcode.com/problems/richest-customer-wealth/

// O(n * m) - ez question
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;
        for (vector<int> &vec : accounts) {
            int total = 0;
            for (int &in : vec) {
                total += in;
            }
            mx = max(mx, total);
        }
        return mx;
    }
};