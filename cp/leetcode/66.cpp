//https://leetcode.com/problems/plus-one/

// O(n) - iterate all elements to check any carry on
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        digits[n-1]++;
        for (int i = n - 1; i > 0; i--) {
            digits[i - 1] += digits[i] / 10;
            digits[i] %= 10;
        }
        
        if (digits[0] > 9) {
            vector<int> temp;
            temp.push_back(digits[0] / 10);
            temp.push_back(digits[0] % 10);
            for (int i = 1; i < n; i++) {
                temp.push_back(digits[i]);
            }
            return temp;
        }
        return digits;
    }
};