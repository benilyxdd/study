// https://leetcode.com/problems/repeated-substring-pattern/

// O(n) - str.find() with new ss -> like string shifting
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss = (s + s).substr(1, s.length() * 2 - 2);
        return ss.find(s) != string::npos;
    }
};
