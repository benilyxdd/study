#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int& x : ar) {
        cin >> x;
    }

    vector<int> dp(n, 0);
    dp[1] = abs(ar[1] - ar[0]);
    for (int i = 2; i < n; i++) {
        dp[i] = min(abs(ar[i] - ar[i - 2]) + dp[i - 2], abs(ar[i] - ar[i - 1]) + dp[i - 1]);
    }
    cout << dp[n - 1];
}

int main() {
    solve();
    return 0;
}