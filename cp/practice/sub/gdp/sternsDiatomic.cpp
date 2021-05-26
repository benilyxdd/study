//https://www.geeksforgeeks.org/find-n-th-element-from-sterns-diatomic-series/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int dp[mxN];

void debug(int n) {
	for (int i = 0; i <= n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
}

void solve() {
	int n;
	cin >> n;

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (i&1) {
			dp[i] = dp[(i-1)/2] + dp[(i+1)/2];
		} else {
			dp[i] = dp[i/2];
		}
	}

	//debug(n);
	cout << dp[n];
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

