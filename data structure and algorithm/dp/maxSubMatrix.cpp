//https://www.geeksforgeeks.org/maximum-size-sub-matrix-with-all-1s-in-a-binary-matrix/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, m, ar[mxN][mxN], dp[mxN][mxN];

void debug() {
	cout << '\n';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void input() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];

	memcpy(dp[0], ar[0], sizeof(dp[0]));
	for (int i = 0; i < n; i++) {
		dp[i][0] = ar[i][0];
	}
}

void f() {
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (ar[i][j] == 1) {
				dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
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

