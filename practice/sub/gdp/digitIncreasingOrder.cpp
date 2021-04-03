//https://www.geeksforgeeks.org/number-n-digits-non-decreasing-integers/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	int dp[n+1][10];
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			dp[i][j] = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 8; j >= 0; j--) {
			dp[i][j] = dp[i-1][j] + dp[i][j+1];
		}
	}

	/*
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
	*/

	cout << dp[n][0] << '\n';
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

