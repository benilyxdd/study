// https://leetcode.com/problems/minimum-cost-for-tickets/

// O(n) - dp (iterative)
class Solution {
 public:
  int mincostTickets(vector<int>& days, vector<int>& costs) {
    int n = days.size();
    vector<int> dp(366, 0);
    vector<int> travel(366, false);
    for (int& day : days) {
      travel[day] = true;
    }

    for (int i = 1; i < 366; i++) {
      if (!travel[i]) {
        dp[i] = dp[i - 1];
      } else {
        dp[i] = min({dp[i - 1] + costs[0], dp[max(0, i - 7)] + costs[1],
                     dp[max(0, i - 30)] + costs[2]});
      }
    }

    return dp[365];
  }
};

// O(n) - dp (recursive)
class Solution {
 public:
  int mincostTickets(vector<int>& days, vector<int>& costs) {
    int n = days.size();
    vector<int> dp(n, (int)1e9);
    vector<int> day = {1, 7, 30};

    std::function<int(int)> dfs = [&](int i) {
      if (i == n) return 0;
      if (dp[i] != (int)1e9) return dp[i];

      for (int k = 0; k < 3; k++) {
        int j = i;
        while (j < n && days[j] < days[i] + day[k]) {
          j++;
        }
        dp[i] = min(dp[i], costs[k] + dfs(j));
      }
      return dp[i];
    };

    return dfs(0);
  }
};