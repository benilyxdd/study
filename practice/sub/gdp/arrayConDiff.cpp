//https://www.geeksforgeeks.org/count-arrays-consecutive-element-different-values/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int dp[mxN], n, k, x;

void debug() {
	for (int i = 0; i <= n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
}

void solve() {
	cin >> n >> k >> x;

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i-1]*(k-2) + dp[i-2]*(k-1);
	}

	debug();
	cout << (x == 1 ? (k-1)*dp[n-2] : dp[n-1]) << '\n';
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

