#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int n, k, p, ar[mxN][31], pre[mxN][31], dp[mxN][mxN*31];

void debug() {
	cout << "Pre: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= k; j++) {
			cout << pre[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "\nDp: \n";
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= p; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
}

void prefix() {
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			pre[i][j] = pre[i][j-1] + ar[i][j-1];
		}
	}
}

void f() {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= p; j++) {
			for (int x = 0; x <= min(j, k); x++) {
				dp[i][j] = max(dp[i][j], pre[i-1][x] + dp[i-1][j-x]);
			}
		}
	}
}

void solve() {
	memset(dp, 0, sizeof(dp));
	//memset(pre, 0, sizeof(pre));

	cin >> n >> k >> p;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++) 
			cin >> ar[i][j];
	
	prefix();
	f();
	//debug();
	cout << dp[n][p] << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
