// https://leetcode.com/problems/repeated-dna-sequences/

// O(n * 10) - sliding window
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();
        set<string> ans, dict;
        
        for (int i = 9; i < n; i++) {
            string str = s.substr(i - 9, 10);
            if (dict.find(str) != dict.end()) {
                ans.insert(str);
            }
            dict.insert(str);
        }
        
        vector<string> ans_vec(ans.begin(), ans.end());
        return ans_vec;
    }
};