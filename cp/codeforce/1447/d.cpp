#include <bits/stdc++.h>
using namespace std;

#define ll long long

void debug(vector<vector<int>> &dp) {
	for (vector<int> &vec : dp) {
		for (int &in : vec) {
			cout << in << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	int n, m;
	string a, b;
	cin >> n >> m >> a >> b;

	int ans = 0;
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 2;
			} else {
				dp[i][j] = max(max(dp[i - 1][j], dp[i][j - 1]) - 1, 0);
			}
			ans = max(ans, dp[i][j]);
		}
	}
	// debug(dp);
	cout << ans << '\n';
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

