// https://leetcode.com/problems/find-the-difference/

// O(n) - map
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> a(128, 0), b(128, 0);
        for (char &ch : s) {
            a[ch]++;
        }
        for (char &ch : t) {
            b[ch]++;
        }
        
        for (int i = 0; i < 128; i++) {
            if (a[i] != b[i]) {
                return char(i);
            }
        }
        return 1;
    }
};