#include <bits/stdc++.h>
using namespace std;

void debug(array<int, 3> ar[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ar[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void solve() {
    int n;
    cin >> n;
    array<int, 3> ar[n];
    for (array<int, 3>& x : ar) {
        for (int& y : x) {
            cin >> y;
        }
    }

    array<int, 3> dp[n];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < 3; i++) {
        dp[0][i] = ar[0][i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                dp[i][j] = max(dp[i][j], dp[i - 1][(j + k + 1) % 3] + ar[i][j]);
            }
        }
    }
    // debug(dp, n);

    int mx = 0;
    for (int i = 0; i < 3; i++) {
        mx = max(mx, dp[n - 1][i]);
    }
    cout << mx;
}

int main() {
    // freopen("output.txt", "w", stdout);
    
    solve();
    return 0;
}