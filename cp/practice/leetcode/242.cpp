//https://leetcode.com/problems/valid-anagram/

// O(n log n) - sort
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};