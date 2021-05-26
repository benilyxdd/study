//https://leetcode.com/problems/palindrome-number/

// O(n) - len of to_string(x)
class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string(x);
        string b = string(a.rbegin(), a.rend());
        int n = a.length();
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
};