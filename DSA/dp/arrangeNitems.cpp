//https://www.geeksforgeeks.org/number-of-ways-to-arrange-n-items-under-given-constraints/
//NOT Finish
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ar(k);
	for (int i = 0; i < k; i++) {
		cin >> ar[i];
	}

	int dp[n+1][n+1];
	memset(dp, 0, sizeof(dp));

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
			}
		}
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "Ans: " << dp[n][n] << '\n';
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

