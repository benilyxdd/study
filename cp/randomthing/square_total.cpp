#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, m;
	cin >> n >> m;

	int dp[n][m];
	for (int i = 0; i < n; i++){
		dp[i][0] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		dp[0][i] = i + 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + min(i, j) + 1;
		}
	}

	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		cout << dp[i][j] << ' ';
	// 	}
	// 	cout << '\n';
	// }
	cout << "Ans: " << dp[n - 1][m - 1] << '\n';
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

