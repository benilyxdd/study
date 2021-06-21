//https://www.geeksforgeeks.org/remove-array-end-element-maximize-sum-product//
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	int dp[n+1][n+1];
	memset(dp, 0, sizeof(dp));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j) {
				dp[i][j] = -1;
			} else if (i == j) {
				dp[i][j] = ar[i];
			}
		}
	}

	for (int i = n-2; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			if (i > j || i == j) {
				continue;
			} else {
				dp[i][j] = max(dp[i+1][j] + ar[i]*(j-i+1), dp[i][j-1] + ar[j]*(j-i+1));
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp[i][j] << ' ';
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

