// https://leetcode.com/problems/letter-case-permutation/

// O(?) - backtracking
class Solution {
 public:
  vector<string> letterCasePermutation(string s) {
    vector<string> ans;
    backtrack(s, 0, ans);
    return ans;
  }

  void backtrack(string &s, int cur, vector<string> &ans) {
    if (cur == s.size()) {
      ans.push_back(s);
      return;
    }

    backtrack(s, cur + 1, ans);
    if (isalpha(s[cur])) {
      s[cur] ^= (1 << 5);
      backtrack(s, cur + 1, ans);
    }
  }
};