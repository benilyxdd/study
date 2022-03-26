// https://leetcode.com/problems/decode-ways/

// O(n) - dp iterative
class Solution {
 public:
  int numDecodings(string s) {
    int n = s.length();
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = s[0] != '0';

    for (int i = 2; i <= n; i++) {
      if (i > 1 && s[i - 2] != '0') {
        string temp = "";
        temp = temp + s[i - 2] + s[i - 1];
        if (stoi(temp) < 27) {
          dp[i] += dp[i - 2];
        }
      }

      if (s[i - 1] != '0') {
        dp[i] += dp[i - 1];
      }
    }

    return dp[n];
  }
};

// O(n) - recursion
class Solution {
 public:
  int numDecodings(string s) {
    int n = s.length();
    vector<int> dp(n, -1);

    std::function<int(int)> backtrack = [&](int i) {
      if (i == n) return 1;
      if (dp[i] != -1) return dp[i];

      int ans = 0;
      if (i + 1 <= n) {
        string one = s.substr(i, 1);
        if (one == "0") return 0;

        ans += backtrack(i + 1);
      }
      if (i + 2 <= n) {
        string two = s.substr(i, 2);
        if (two[0] == '0') return 0;

        if (stoi(two) < 27) {
          ans += backtrack(i + 2);
        }
      }

      dp[i] = ans;
      return ans;
    };

    return backtrack(0);
  }
};