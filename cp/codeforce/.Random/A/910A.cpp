#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, d;
	string s;
	cin >> n >> d >> s;

	int dp[n];
	fill(dp, dp+n, 1e9);
	dp[0] = 1;

	for (int i = 1; i < n; i++) {
		if (s[i] == '0') {
			dp[i] = 0;
		} else {
			for (int j = i-d; j < i; j++) {
				if (s[j] == '1') {
					dp[i] = min(dp[i], dp[j]+1);
				}
			}
		}
	}

	cout << (dp[n-1] == 1e9 ? -1 : dp[n-1]-1) << '\n';
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


