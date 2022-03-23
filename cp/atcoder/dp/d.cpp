#include <bits/stdc++.h>
using namespace std;

void debug(vector<vector<long long int>>& dp) {
    for (vector<long long int>& x : dp) {
        for (long long int& y : x) {
            cout << y << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void solve() {
    int n, w;
    cin >> n >> w;
    vector<array<int, 2>> ar(n);
    for (array<int, 2>& x : ar) {
        cin >> x[0] >> x[1];
    }

    vector<vector<long long int>> dp(n, vector<long long int>(w + 1, 0LL));
    for (int i = ar[i][0]; i <= w; i++) {
        dp[0][i] = ar[0][1];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            if (j >= ar[i][0]) {
                dp[i][j] = max(dp[i - 1][j], (long long int)dp[i - 1][j - ar[i][0]] + ar[i][1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // debug(dp);
    cout << dp[n - 1][w];
}

int main() {
    // freopen("output.txt", "w", stdout);
    
    solve();
    return 0;
}