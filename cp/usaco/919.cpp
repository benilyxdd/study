#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> dp(1001, vector<int>(1001, 0));
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		a++, b++, c++, d++;
		dp[a][b]++;
		dp[a][d]--;
		dp[c][b]--;
		dp[c][d]++;
	}

	int ans = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= 1000; j++) {
			dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
			ans += (dp[i][j] == k);
		}
	}
	cout << ans << '\n';
}

int main() {
	freopen("paintbarn.in", "r", stdin);
	freopen("paintbarn.out", "w", stdout);
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

