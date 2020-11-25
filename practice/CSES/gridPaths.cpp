#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;
const int mxN = 1000;
string a[mxN];
ll dp[mxN][mxN];

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];

	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i) 
				dp[i][j] += dp[i-1][j];
			if (j)
				dp[i][j] += dp[i][j-1];
			dp[i][j]%=MOD;
			if (a[i][j] == '*')
				dp[i][j] = 0;
		}
	}
	cout << dp[n-1][n-1];
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

