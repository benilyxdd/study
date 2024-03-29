//https://www.geeksforgeeks.org/counts-paths-point-reach-origin/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int dp[mxN][mxN];

void debug(int n, int m) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i <= n; i++)
		dp[i][0] = 1;
	for (int i = 0; i <= m; i++)
		dp[0][i] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}

	//debug(n, m);
	cout << dp[n][m] << '\n';
}

int main() {
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

