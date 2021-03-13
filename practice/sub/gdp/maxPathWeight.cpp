//https://www.geeksforgeeks.org/maximum-weight-path-ending-element-last-row-matrix/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int ar[mxN][mxN], n, dp[mxN][mxN];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> ar[i][j];
}

void f() {
	dp[0][0] = ar[0][0];
	for (int i = 1; i < n; i++) {
		dp[i][0] = dp[i-1][0] + ar[i][0];
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < i; j++) {
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + ar[i][j];
		}
	}
}

void debug() {
	cout << '\n';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	input();
	f();

	//debug();
	cout << *max_element(dp[n-1], dp[n-1]+n);
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

