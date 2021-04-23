#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int& x : ar) {
        cin >> x;
    }

    vector<int> dp(n, (int)1e9);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j <= i) {
                dp[i] = min(dp[i], dp[i - j] + abs(ar[i] - ar[i - j]));
            }
        }
    }
    cout << dp[n - 1];
}

int main() {
    solve();
    return 0;
}