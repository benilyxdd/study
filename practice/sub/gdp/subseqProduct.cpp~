//https://www.geeksforgeeks.org/count-subsequences-product-less-k/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, k, ar[mxN], dp[mxN][mxN];

void debug() {
	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j] = dp[i][j-1];
			if (ar[j-1] <= i && ar[j-1] > 0) {
				dp[i][j] += dp[i/ar[j-1]][j-1]+1;
			}
		}
	}
	cout << dp[k][n];
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

