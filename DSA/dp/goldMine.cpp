//https://www.geeksforgeeks.org/gold-mine-problem/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int n, m, ar[mxN][mxN], dp[mxN][mxN];

void debug() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];

	for (int i = 0; i < n; i++)
		dp[i][m-1] = ar[i][m-1];

	for (int j = m-2; j >= 0; j--) {
		for (int i = 0; i < n; i++) {
			int r = dp[i][j+1];
			int u = (i == 0 ? 0 : dp[i-1][j+1]);
			int d = (i == n-1 ? 0 : dp[i+1][j+1]);
			
			dp[i][j] = ar[i][j] + max({r, u, d});
		}
	}

	//debug();
	int mx = 0;
	for (int i = 0; i < n; i++) 
		mx = max(mx, dp[i][0]);

	cout << mx;
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

