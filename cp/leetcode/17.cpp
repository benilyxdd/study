// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

// O(n ^ 2) - iterative
class Solution {
 public:
  vector<string> letterCombinations(string digits) {
    int n = digits.size();
    vector<string> ans;
    if (n == 0) return ans;
    map<int, vector<char>> mp = {
        {2, {'a', 'b', 'c'}}, {3, {'d', 'e', 'f'}},
        {4, {'g', 'h', 'i'}}, {5, {'j', 'k', 'l'}},
        {6, {'m', 'n', 'o'}}, {7, {'p', 'q', 'r', 's'}},
        {8, {'t', 'u', 'v'}}, {9, {'w', 'x', 'y', 'z'}}};

    stack<string> st1, st2;
    st1.push("");

    for (int i = 0; i < n; i++) {
      while (!st1.empty()) {
        string cur = st1.top();
        st1.pop();

        for (char &ch : mp[digits[i] - '0']) {
          st2.push(cur + ch);
        }
      }
      swap(st1, st2);
    }

    while (!st1.empty()) {
      string top = st1.top();
      st1.pop();
      ans.push_back(top);
    }

    return ans;
  }
};

// O(3 ^ n) - recursion
class Solution {
 public:
  vector<string> letterCombinations(string digits) {
    int n = digits.size();
    vector<string> ans;
    map<int, vector<char>> mp = {
        {2, {'a', 'b', 'c'}}, {3, {'d', 'e', 'f'}},
        {4, {'g', 'h', 'i'}}, {5, {'j', 'k', 'l'}},
        {6, {'m', 'n', 'o'}}, {7, {'p', 'q', 'r', 's'}},
        {8, {'t', 'u', 'v'}}, {9, {'w', 'x', 'y', 'z'}}};

    std::function<void(int, string)> backtrack = [&](int cur, string temp) {
      if (cur == n && temp != "") {
        ans.push_back(temp);
        return;
      }

      for (char &ch : mp[digits[cur] - '0']) {
        temp += ch;
        backtrack(cur + 1, temp);
        temp.pop_back();
      }
    };
    backtrack(0, "");

    return ans;
  }
};