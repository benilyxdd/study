#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int dp[mxN][mxN], n, x;
int ar[mxN];

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 0; i < n; i++) {
		dp[i][0] = 1;
	}
	for (int i = 1; i <= x; i++) {
		dp[0][i] = 0;
	}
	dp[0][ar[0]] = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= x; j++) {
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-ar[i]]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= x; j++) {
			cout << dp[i][j] << " ";
		}
		cout << '\n';
	}
	cout << dp[n-1][x] << '\n';
	if (dp[n-1][x] == 1) {
		for (int i = n-1, j = x; i >= 0; i--) {
			if (i == 0 && j > 0) {
				cout << ar[i] << ' ';
				break;
			}
			if (j >= ar[i]) {
				if (dp[i-1][j-ar[i]] == 1) {
					cout << ar[i] << ' ';
					j -= ar[i];
				}
			}
		}
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

