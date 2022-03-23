#include <bits/stdc++.h>
using namespace std;

#define ll long long

void debug(vector<vector<int>> dp) {
	for (vector<int> &vec : dp) {
		for (int &x : vec) {
			cout << x << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	string s;
	cin >> s;

	int n = s.length();
	vector<vector<int>> dp(n, vector<int>(2, 0));
	dp[0][0] = (s[0] == '0' || s[0] == '?');
	dp[0][1] = (s[0] == '1' || s[0] == '?');

	for (int i = 1; i < n; i++) {
		dp[i][0] = (s[i] != '1' ? dp[i - 1][1] + 1 : 0);
		dp[i][1] = (s[i] != '0' ? dp[i - 1][0] + 1 : 0);
	}
	// debug(dp);

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += max(dp[i][0], dp[i][1]);
	}
	cout << ans << '\n';
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

