//https://leetcode.com/problems/regular-expression-matching/

// O(?) - some cheaty ways lol
class Solution {
public:
    bool isMatch(string s, string p) {
        return regex_match(s, regex(p));
    }
};