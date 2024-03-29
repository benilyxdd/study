//https://www.geeksforgeeks.org/longest-common-substring-dp-29/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int dp[mxN][mxN];

void debug(int n, int m) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	string a, b;
	cin >> a >> b;

	int n = a.length(), m = b.length();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1] + 1;
			}
		}
	}

	//debug(n, m);

	int mx = 0;
	for (int i = 1; i <= n; i++) {
		mx = max(mx, *max_element(dp[i], dp[i]+m+1));
	}
	cout << mx << '\n';
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

