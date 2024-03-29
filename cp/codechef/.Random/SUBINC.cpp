#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int c[n];
	for (int i = 0; i < n; i++) cin >> c[i];
	int dp[n];
	dp[0] = 1;
	ll sum = 1;
	for (int i = 1; i < n; i++) {
		dp[i] = 1;
		if (c[i] >= c[i-1]) dp[i] += dp[i-1];
		sum += dp[i];
	} 
	cout << sum << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

