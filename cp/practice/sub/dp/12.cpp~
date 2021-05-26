#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int dp[mxN][mxN], n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		dp[a][b] = -1;
	}
	
	dp[0][0] = 0;
	for (int i = 1; i <= n; i++) {
		dp[0][i] = 1;
		dp[i][0] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (dp[i][j] != -1) {
				int x = max(dp[i-1][j], 0);
				int y = max(dp[i][j-1], 0);
				//int z = max(dp[i-1][j-1], 0); //diagonal ok
				dp[i][j] = x+y;
				//dp[i][j] += z; //diagonal ok
			}
		}
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			cout << dp[i][j] << " ";
		}
		cout << '\n';
	}
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

