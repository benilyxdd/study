#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> gen(int n = 100000) {
	vector<int> res = {1, 6, 9};
	int x = 6;
	while (x * 6 <= n) {
		x *= 6;
		res.push_back(x);
	}
	x = 9;
	while (x * 9 <= n) {
		x *= 9;
		res.push_back(x);
	}
	sort(res.begin(), res.end());
	return res;
}

void debug(vector<vector<int>> &dp) {
	for (vector<int> &vec : dp) {
		for (int &in : vec) {
			cout << in << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
}

void solve() {
	int n;
	cin >> n;
	vector<int> all = gen(n);

	vector<vector<int>> dp(all.size(), vector<int>(n + 1, 0));

	for (int i = 0; i <= n; i++) {
		dp[0][i] = i;
	}

	for (int i = 1; i < all.size(); i++) {
		for (int j = 1; j <= n; j++) {
			if (j - all[i] >= 0) {
				dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - all[i]] + 1);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	debug(dp);
	cout << dp[all.size() - 1][n];
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

