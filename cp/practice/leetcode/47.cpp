//https://leetcode.com/problems/permutations-ii/

// O(n!) - all permutations - using stl library and set
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& ar) {
        set<vector<int>> ans;
        sort(ar.begin(), ar.end());
        do {
            ans.insert(ar);
        } while (next_permutation(ar.begin(), ar.end()));
        
        vector<vector<int>> real_ans;
        for (const vector<int>& vec : ans) {
            real_ans.push_back(vec);
        }
        return real_ans;
    }
};