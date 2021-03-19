//https://www.geeksforgeeks.org/count-ways-build-street-given-constraints/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int dp[2][mxN];

void debug(int n) {
	for (int i = 0; i <= n; i++)
		cout << dp[0][i] << ' ' << dp[1][i] << " total:" << dp[0][i]+dp[1][i] << '\n';
	cout << '\n';
}

void solve() {
	int n;
	cin >> n;
	
	dp[0][1] = 1;
	dp[1][1] = 2;

	for (int i = 2; i <= n; i++) {
		dp[0][i] = dp[0][i-1] + dp[1][i-1];
		dp[1][i] = dp[0][i-1]*2 + dp[1][i-1];
	}
	//debug(n);
	cout << dp[0][n] + dp[1][n] << '\n';
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

