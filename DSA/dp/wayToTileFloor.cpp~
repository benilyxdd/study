//https://www.geeksforgeeks.org/count-number-ways-tile-floor-size-n-x-m-using-1-x-m-size-tiles/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;

	int dp[n+1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= n; i++) {
		if (i < m || i == 1) {
			dp[i] = 1;
		} else if (i == m) {
			dp[i] = 2;
		} else {
			dp[i] = dp[i-1];
			if (i >= m) {
				dp[i] += dp[i-m];
			}
		}
	}


	for (int i = 0; i <= n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
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

