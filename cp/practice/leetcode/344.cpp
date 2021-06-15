//https://leetcode.com/problems/reverse-string/

// O(n) - stl
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
        for (char& x : s)
            cout << x << ' ';
    }
};