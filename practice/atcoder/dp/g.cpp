#include <bits/stdc++.h>
using namespace std;

void debug(vector<int>& dp) {
    for (int& x : dp) {
        cout << x << ' ';
    }
    cout << '\n';
}

void dfs(int now, int previous, vector<int>& dp, vector<vector<int>>& r, int cnt) {
    if (previous != -1) {
        dp[now] = max({cnt, dp[now]});
    } else {
        dp[now] = 1;
    }

    for (int& x : r[now]) {
        dfs(x, now, dp, r, cnt + 1);
    }
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> r(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        r[b].push_back(a);
    }

    vector<bool> visited(n, false);
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++) {
        dfs(i, -1, dp, r, 1);
    }
    debug(dp);
}

int main() {
    // freopen("output.txt", "w", stdout);
    
    solve();
    return 0;
}