#include <bits/stdc++.h>
using namespace std;

void debug(vector<vector<int>>& dp) {
    for (vector<int>& x : dp) {
        for (int& y : x) {
            cout << y << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void solve() {
    string a, b;
    cin >> a >> b;

    int a_len = a.length();
    int b_len = b.length();
    vector<vector<int>> dp(a_len + 1, vector<int>(b_len + 1, 0));
    for (int i = 1; i <= a_len; i++) {
        for (int j = 1; j <= b_len; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    string ans;
    // debug(dp);
    int mx = dp[a_len][b_len];
    int i = a_len, j = b_len;
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            ans += a[i - 1];
            i--, j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main() {
    // freopen("output.txt", "w", stdout);
    
    solve();
    return 0;
}