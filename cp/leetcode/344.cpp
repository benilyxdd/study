//https://leetcode.com/problems/reverse-string/

// O(n) - swap
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            swap(s[i], s[n - i - 1]);
        }
    }
};

// O(n) - stl
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};