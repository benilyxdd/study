//https://www.geeksforgeeks.org/unique-paths-in-a-grid-with-obstacles/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	int ar[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ar[i][j];
		}
	}

	int dp[n][m];
	dp[0][0] = 1;
	for (int i = 1; i < n; i++) {
		if (ar[i][0] != 1) {
			dp[i][0] = dp[i-1][0];
		} else {
			dp[i][0] = 0;
		}
	}

	for (int i = 1; i < m; i++) {
		if (ar[0][i] != 1) {
			dp[0][i] = dp[0][i-1];
		} else {
			dp[0][i] = 0;
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (ar[i][j] == 1) {
				dp[i][j] = 0;
			} else {
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
	}

	//for (int i = 0; i < n; i++) {
		//for (int j = 0; j < m; j++) {
			//cout << dp[i][j] << ' ';
		//}
		//cout << '\n';
	//}
	cout << dp[n-1][m-1] << '\n';
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

