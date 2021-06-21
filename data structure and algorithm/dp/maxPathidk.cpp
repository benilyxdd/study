//https://www.geeksforgeeks.org/maximum-path-sum-starting-cell-0-th-row-ending-cell-n-1-th-row/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, ar[mxN][mxN], dp[mxN][mxN];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> ar[i][j];
}

void debug() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void f() {
	for (int i = 0; i < n; i++) 
		dp[0][i] = ar[0][i];
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j+1]) + ar[i][j];
			} else if (j == n-1) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + ar[i][j];
			} else {
				dp[i][j] = max({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]}) + ar[i][j];
			}
		}
	}
}

void solve() {
	input();
	f();
	debug();
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

