#include <iostream>
#include <vector>
using namespace std;

void debug(vector<vector<int>>& dp) {
    for (vector<int>& vec : dp) {
        for (int& x : vec) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}

int solve(int n, int m) {
    vector<vector<int>> dp(n, vector<int>(m, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + i + 1;
    }
    for (int i = 1; i < m; i++) {
        dp[0][i] = dp[0][i - 1] + i + 1;
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + (i + 1) * (j + 1);
        }
    }
    // debug(dp);

    return dp[n - 1][m - 1];
}

int fastsolve(int n, int m) {
    return (n * m * (n + 1) * (m + 1)) / 4;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << solve(n, m) << '\n';
    cout << fastsolve(n, m) << '\n';

    return 0;
}