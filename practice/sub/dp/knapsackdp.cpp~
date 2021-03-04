#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, c;
	cin >> n >> c;
	vector<int> w(n+1), v(n+1);
	for (int i = 1; i <= n; i++)
		cin >> w[i];
	for (int i = 1; i <= n; i++) 
		cin >> v[i];


	int dp[n+1][c+1];
	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 1; i <= c; i++) 
		dp[0][i] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= c; j++) {
			if (w[i] <= j) {
				dp[i][j] = max(v[i]+dp[i-1][j-w[i]], dp[i-1][j]);
			} else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout << dp[n][c];
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

