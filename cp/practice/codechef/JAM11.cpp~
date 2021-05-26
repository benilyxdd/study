#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MOD = (int)1000000007;
const int MAX = (int)100000+6;
int dp[MAX];

void xd() {
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i < MAX; i++) {
		dp[i] = (dp[i-1]+dp[i-2]+dp[i-3])%MOD;
	}
}

void solve() {
	int n;
	cin >> n;
	cout << dp[n] << "\n";
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	xd();

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

