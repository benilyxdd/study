// https://leetcode.com/problems/ransom-note/

// O(n + m) - loop & vector dict
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> a(128, 0), b(128, 0);
        for (char &ch : ransomNote) {
            a[ch]++;
        }
        for (char &ch : magazine) {
            b[ch]++;
        }
        for (int i = 0; i < 128; i++) {
            if (a[i] > b[i]) {
                return false;
            }
        }
        return true;
    }
};