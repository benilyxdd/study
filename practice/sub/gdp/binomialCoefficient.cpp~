//https://www.geeksforgeeks.org/binomial-coefficient-dp-9/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;

	int dp[n+1][k+1];

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= min(i, k); j++) {
			if (j == 0 || j == i) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
			}
		}
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
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

