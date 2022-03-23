// https://leetcode.com/problems/reverse-words-in-a-string-iii/

// O(n) - loop
class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        int n = s.size(), i = 0;
        string st = "";
        while (i < n) {
            if (s[i] == ' ') {
                vec.push_back(st);
                st = "";
                i++;
            } 
            st += s[i++];
        }
        vec.push_back(st);
        string ans = "";
        for (string &str : vec) {
            reverse(str.begin(), str.end());
        }
        for (int i = 0; i < vec.size(); i++) {
            ans += vec[i];
            if (i < vec.size() - 1) ans += ' ';
        }
        return ans;
    }
};