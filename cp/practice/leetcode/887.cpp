https://leetcode.com/problems/super-egg-drop/

// O(N * K) - dp[m - 1][k - 1] -> egg breaks, dp[m - 1][k] -> egg doesn't break
class Solution {
public:
    int superEggDrop(int K, int N) {
        vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
        int m = 0;
        while (dp[m][K] < N) {
            m++;
            for (int k = 1; k <= K; ++k)
                dp[m][k] = dp[m - 1][k - 1] + dp[m - 1][k] + 1;
        }
        return m;
    }
};