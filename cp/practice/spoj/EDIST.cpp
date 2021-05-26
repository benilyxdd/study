#include <bits/stdc++.h>
using namespace std;

#define ll long long

void debug(vector<vector<int>>& dp) {
	for (vector<int>& vec : dp) {
		for (int& x : vec) {
			cout << x << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
}

void solve() {
	string a, b;
	cin >> a >> b;

	int a_len = a.length();
	int b_len = b.length();

	vector<vector<int>> dp(a_len + 1, vector<int>(b_len + 1, 0));
	for (int i = 0; i <= a_len; i++) {
		dp[i][0] = i;
	}
	for (int i = 0; i <= b_len; i++) {
		dp[0][i] = i;
	}

	for (int i = 1; i <= a_len; i++) {
		for (int j = 1; j <= b_len; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			} else {
				dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
			}
		}
	}
	// debug(dp);
	cout << dp[a_len][b_len] << '\n';
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

