//https://www.geeksforgeeks.org/sequences-given-length-every-element-equal-twice-previous/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, m, dp[mxN][mxN], call, mem[mxN][mxN];

void debug() {
	for (int i = 0; i <= n; i++) {
		for(int j = 0; j <= m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

int rec(int x, int y) {
	if (x < y) 
		return 0;

	if (y == 0)
		return 1;

	if (mem[x][y] != -1)
		return mem[x][y];
	call++;

	int ans = 0;
	ans += rec(x-1, y);
	ans += rec(x/2, y-1);
	return mem[x][y] = ans;
}

int ite() {
	/*
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			} else if (i < j) {
				dp[i][j] = 0;
			} else if (j == 1) {
				dp[i][j] = i;
			} else {
				dp[i][j] = dp[i-1][j]+dp[i/2][j-1];
			}
		}
	}
	*/
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j == 1) {
				dp[i][j] = i;
			} else {
				dp[i][j] = dp[i-1][j] + dp[i/2][j-1];
			}
		}
	}

	//debug();
	return dp[n][m];
}

void solve() {
	memset(mem, -1, sizeof(mem));
	cin >> n >> m;
	//cout << "rec: " << rec(n, m) << " calls: " << call << '\n';
	cout << "dp: " << ite() << '\n';
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

