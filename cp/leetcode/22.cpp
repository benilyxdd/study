// https://leetcode.com/problems/generate-parentheses/

// O(2 ^ n) - recursion
class Solution {
 public:
  vector<string> generateParenthesis(int n) {
    vector<string> ans;

    std::function<void(int, int, string)> backtrack = [&](int lo, int hi,
                                                          string cur) {
      if (lo == n && hi == n) {
        ans.push_back(cur);
        return;
      }

      if (lo < n) {
        backtrack(lo + 1, hi, cur + '(');
      }

      if (hi < lo) {
        backtrack(lo, hi + 1, cur + ')');
      }
    };
    backtrack(0, 0, "");

    return ans;
  }
};