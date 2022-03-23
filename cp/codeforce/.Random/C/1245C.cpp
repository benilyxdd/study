#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	bool ok = 1;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'w' || s[i] == 'm') {
			ok = 0;
			break;
		}
	}
	if (!ok) {
		cout << 0;
		return;
	}


	int dp[n+1];
	memset(dp, 0, sizeof(dp));
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		if (!(s[i-1] == 'u' || s[i-1] == 'n')) {
			dp[i] = dp[i-1];
		} else {
			if (s[i-1] == 'u') {
				if (s[i-2] == 'u') {
					dp[i] = (dp[i] + dp[i-2]) % MOD;
				}
			} else if (s[i-1] == 'n') {
				if (s[i-2] == 'n') {
					dp[i] = (dp[i] + dp[i-2]) % MOD;
				}
			}
			dp[i] = (dp[i] + dp[i-1]) % MOD;
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

