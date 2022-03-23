//https://leetcode.com/problems/valid-anagram/

// O(n) - loop & vector dict
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(128, 0), b(128, 0);
        for (char &ch : s) {
            a[ch]++;
        }
        for (char &ch : t) {
            b[ch]++;
        }
        for (int i = 0; i < 128; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
};

// O(n log n) - sort
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};