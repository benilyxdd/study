//https://leetcode.com/problems/number-of-matching-subsequences/

// O(n) - genius 
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<pair<int, int>> cnt[128];
        int n = words.size();
        for (int i = 0; i < n; i++) {
            cnt[words[i][0]].push_back({i, 0});
        }
        for (char &ch : s) {
            vector<pair<int, int>> temp = cnt[ch];
            cnt[ch].clear();
            for (pair<int, int> &p : temp) {
                cnt[words[p.first][++p.second]].push_back(p);
            }
        }
        return cnt[0].size();
    }
};