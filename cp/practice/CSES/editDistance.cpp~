#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;

	int n = a.length();
	int m = b.length();

	int dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i <= n; i++) {
		dp[i][0] = i;
	}
	for (int j = 0; j <= m; j++) {
		dp[0][j] = j;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1];
			} else {
				dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
			}
		}
	}

	cout << dp[n][m];
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

