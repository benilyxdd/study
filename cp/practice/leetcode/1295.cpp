//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

// O(n) - loop
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int &x : nums) {
            string s = to_string(x);
            ans += (s.length() % 2 == 0);
        }
        return ans;
    }
};