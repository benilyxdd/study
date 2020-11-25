#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000009;

int dp[1000005];

void f() {
	dp[0] = 1;
	dp[1] = 0;
	dp[2] = dp[3] = 1;
	for (int i = 4; i <= (1e6); i++) {
		dp[i] = dp[i-2] + dp[i-3];
		dp[i] = dp[i]%MOD;
	}
}

void solve() {
	int n;
	cin >> n;
	cout << dp[n] << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	f();
	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

