//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int ar[mxN], n, k, dp[mxN][mxN];

void debug() {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 0; i <= n; i++)
		dp[i][0] = 1;
	for (int i = 1; i <= k; i++) 
		dp[0][i] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (ar[i-1] > j) {
				dp[i][j] = dp[i-1][j];
			} else {
				dp[i][j] = max(dp[i-1][j-ar[i-1]], dp[i-1][j]);
			}
		}
	}
	debug();
	cout << (dp[n][k] ? "YES" : "NO");
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

