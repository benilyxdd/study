#include <bits/stdc++.h>
using namespace std;

void debug(vector<vector<int>>& ar) {
    for (vector<int>& x : ar) {
        for (int& y : x) {
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

    // auto cmp = [&](array<int, 2> &a, array<int, 2> &b) {
    //     if (a[1] == b[1]) {
    //         return a[0] < b[0];
    //     }
    //     return a[1] < b[1];
    // };

    // sort(ar.begin(), ar.end(), cmp);

    vector<vector<int>> dp(n, vector<int>(n * (int)1e4 + 5, (int)1e9 + 5));
    dp[0][ar[0][1]] = ar[0][0];
    for (int i = 0; i < n; i++) {
        dp[i][0] = 0;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n * (int)1e3 + 5; j++) {
            if (j >= ar[i][1]) {
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - ar[i][1]] + ar[i][0]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // debug(dp);

    int mx = 0;
    for (int i = 0; i < (int)1e3 * n + 5; i++) {
        if (dp[n - 1][i] <= w) {
            mx = max(mx, i);
        }
    }
    cout << mx;
}

signed main() {
    // freopen("output.txt", "w", stdout);
    
    solve();
    return 0;
}