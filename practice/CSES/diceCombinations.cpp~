#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;
const int MAX = (int)1e6+6;
ll dp[MAX+1];

void solve() {
	int n;
	cin >> n;
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= min(6, i); j++) {
			dp[i] = (dp[i]+dp[i-j])%MOD;
		}
	}
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

