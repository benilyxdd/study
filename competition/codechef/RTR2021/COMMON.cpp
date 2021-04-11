#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;

	int a_len = a.length();
	int b_len = b.length();

	int dp[a_len + 1][b_len + 1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= a_len; i++) {
		for (int j = 1; j <= b_len; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[a_len][b_len] << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	// cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

