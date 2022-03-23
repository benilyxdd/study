//https://leetcode.com/problems/valid-palindrome/

// O(n) - loop
class Solution {
public:
    bool isPalindrome(string s) {
        string all;
        for (char& x : s) {
            if (isalpha(x)) {
                all += tolower(x);
            } else if (isdigit(x)) {
                all += x;
            }
        }
        
        for (int i = 0; i < all.length()/2; i++) {
            if (all[i] != all[all.length()-1-i]) {
                return false;
            }
        }
        return true;
    }
};