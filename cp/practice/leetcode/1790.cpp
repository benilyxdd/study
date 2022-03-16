// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/

// O(n) - loop
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        vector<char> temp, temp2;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                temp.push_back(s1[i]);
                temp2.push_back(s2[i]);
            }
        }
        sort(temp.begin(), temp.end());
        sort(temp2.begin(), temp2.end());
        return (temp.size() == 0 || temp.size() == 2 && temp[0] == temp2[0] && temp[1] == temp2[1]);
    }
};