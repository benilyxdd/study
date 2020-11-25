#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n, m;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	bool dp[n+1][m+1];
	
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 1;
	}
	for (int i = 1; i <= m; i++) {
		dp[0][i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j < v[i-1]) {
				dp[i][j] = dp[i-1][j];
			} else {
				dp[i][j] = dp[i-1][j] || dp[i-1][j-v[i-1]];
			}
		}
	}
	cout << (dp[n][m] ? "Yes" : "No") << "\n";
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

