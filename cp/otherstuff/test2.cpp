#include <iostream>
#include <vector>
#include <string.h>
#include <assert.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int k = 2;

        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(2)));
        for (int i = 0; i <= n; i++) {
            dp[i][0][0] = 0;
            dp[i][0][1] = -1e6;
        }
        for (int i = 0; i <= k; i++) {
            dp[0][i][0] = 0;
            dp[0][i][1] = -1e6;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j][1] + prices[i - 1]);
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0] - prices[i - 1]);
            }
        }

        // for (int i = 0; i <= n; i++) {
        //     for (int j = 0; j < 3; j++) {
        //         cout << dp[i][j][0] << ' ' << dp[i][j][1] << '\\';
        //     }
        //     cout << '\n';
        // }
        return dp[n][2][0];
    }
};

int main() {
    Solution sol;
    pair<vector<int>, int> price1 = {{3, 3, 5, 0, 0, 3, 1, 4}, 6};
    pair<vector<int>, int> price2 = {{1, 2, 3, 4, 5}, 4};
    assert(sol.maxProfit(price1.first) == price1.second);
    assert(sol.maxProfit(price2.first) == price2.second);
}