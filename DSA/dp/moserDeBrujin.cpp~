#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int n, dp[mxN];

void solve() {
	cin >> n;

	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		if (!(i&1)) {
			dp[i] = 4*dp[i/2];
		} else {
			dp[i] = 4*dp[i/2]+1;
		}
	}

	for (int i = 0; i <= n; i++) 
		cout << dp[i] << ' ';
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

