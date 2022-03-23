//https://www.geeksforgeeks.org/count-number-of-ways-to-cover-a-distance/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MOD = (int)1e9+7;
const int mxN = (int)1e5;
int dp[mxN];

void solve() {
	int n;
	cin >> n;

	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 3; j++) {
			if (i >= j) {
				dp[i] += dp[i-j];
			}
		}
		dp[i] %= MOD;
	}
	cout << dp[n] << '\n';
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

