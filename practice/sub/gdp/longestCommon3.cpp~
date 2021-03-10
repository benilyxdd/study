#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e2;
int dp[mxN][mxN][mxN];

void solve() {
	string a, b, c;
	cin >> a >> b >> c;
	int n1 = a.length(), n2 = b.length(), n3 = c.length();

	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= n2; j++) {
			for (int k = 1; k <= n3; k++) {
				if (a[i-1] == b[j-1] && b[j-1] == c[k-1]) {
					dp[i][j][k] = dp[i-1][j-1][k-1]+1;
				} else {
					dp[i][j][k] = max({dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]});
				}	
			}
		}
	}
	cout << dp[n1][n2][n3];
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

