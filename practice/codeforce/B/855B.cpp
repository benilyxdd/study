#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, a[3];
	cin >> n >> a[0] >> a[1] >> a[2];
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int dp[3][n+1];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 0) {
				dp[i][j] = max(dp[i][j-1], a[i] * ar[j-1]);
			} else if (i == 1) {
				dp[i][j] = max(dp[i][j-1], dp[i-1][j] + a[i] * ar[j-1]);
			} else {
				dp[i][j] = max(dp[i][j-1], dp[i-1][j] + a[i] * ar[j-1]);
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j <= n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << dp[2][n] << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

