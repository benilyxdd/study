#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

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
    int h, w;
    cin >> h >> w;
    vector<vector<char>> ar(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> ar[i][j];
        }
    }

    vector<vector<int>> dp(h, vector<int>(w));
    // first row
    bool can = true;
    for (int i = 0; i < h; i++) {
        if (can && ar[i][0] == '.') {
            dp[i][0] = 1;
        } else {
            can = false;
            dp[i][0] = 0;
        }
    }
    //first col
    can = true;
    for (int i = 0; i < w; i++) {
        if (can && ar[0][i] == '.') {
            dp[0][i] = 1;
        } else {
            can = false;
            dp[0][i] = 0;
        }
    }

    for (int i = 1; i < h; i++) {
        for (int j = 1; j < w; j++) {
            if (ar[i][j] != '#') {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            } else {
                dp[i][j] = 0;
            }
        }
    }
    // debug(dp);
    cout << dp[h - 1][w - 1];
}

int main() {
    // freopen("output.txt", "w", stdout);
    
    solve();
    return 0;
}