#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a;
const int mxN = (int)1e4;
int dp[mxN][mxN];

void pr(int n, string& s)  {
	int x = n, y = n;
	while(x != 0) {
		while(dp[x-1][y] == dp[x][y]) {
			x--;
		}
		x--;
		s += a[x];
	}
	reverse(s.begin(), s.end());
}

void debug(int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	cin >> a;

	int n = a.length();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i-1] == a[j-1] && i != j) {
				dp[i][j] = dp[i-1][j-1]+1;
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}

	string ans;
	//debug(n);
	pr(n, ans);
	cout << ans;
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

