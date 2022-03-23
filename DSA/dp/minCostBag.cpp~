//https://www.geeksforgeeks.org/minimum-cost-to-fill-given-weight-in-a-bag/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e4;
int n, w, ar[mxN], dp[mxN][mxN];
vector<int> wt, val;

void input() {
	int size = 0;

	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (ar[i] != -1) {
			size++;
			wt.push_back(i+1);
			val.push_back(ar[i]);
		}
	}
	n = size;
}

void debug() {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= w; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

int f() {
	for (int i = 1; i <= n; i++) 
		dp[i][0] = 0;
	for (int i = 0; i <= w; i++)
		dp[0][i] = INT_MAX;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= w; j++) {
			if (wt[i-1] > j) {
				dp[i][j] = dp[i-1][j];
			} else {
				dp[i][j] = min(dp[i-1][j], dp[i][j-wt[i-1]] + val[i-1]);
			}
		}
	}
	return (dp[n][w] == INT_MAX ? -1 : (int)dp[n][w]);
}

void solve() {
	input();
	cout << f();
	//debug();
}

signed main() {
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

