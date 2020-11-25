#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, t;
	cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int mx = *max_element(a, a+n);
	int dp[n+1][mx+1];

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= t; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			} else if (a[i-1] <= j) {
				dp[i][j] = max(a[i-1] + dp[i-1][j-a[i-1]], dp[i-1][j]);
			} else {
				dp[i][j] = dp[i-1][j];
			}
		}	
	}
	cout << dp[n][t];
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

