#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

void solve() {
	int n, k, d;
	cin >> n >> k >> d;

	int dp[n+1];
	dp[0] = 0;
	
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = max(0, i-k); j < i; j++) {
			dp[i] += dp[j];
		}
	}
	for (int i = 0; i <= n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
	cout << dp[n] << '\n';
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

