// https://leetcode.com/problems/perfect-squares/

// O(n log n) - dp
class Solution {
 public:
  int numSquares(int n) {
    vector<int> sqs;
    int i = 1;
    while (i * i <= n) {
      sqs.push_back(i * i);
      i++;
    }

    int m = sqs.size();
    vector<int> dp(n + 1, (int)1e9);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
      for (int &x : sqs) {
        if (x <= i) {
          dp[i] = min(dp[i], 1 + dp[i - x]);
        }
      }
    }
    return dp[n];
  }
};