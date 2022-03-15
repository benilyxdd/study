//https://leetcode.com/problems/first-unique-character-in-a-string/

// O(n) - use vector instead of map (faster)
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> dict(128, 0);
        for (char &ch : s) {
            dict[ch]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (dict[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

// O(n) - loop & map
class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        map<int, int> cnt;
        for (char &ch : s) {
            cnt[ch]++;
        }
        for (int i = 0; i < n; i++) {
            if (cnt[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};