#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n+1);
	ar[0] = -1;
	for (int i = 1; i <= n; i++) {
		cin >> ar[i];
	}

	//dp[i][0] = sport, dp[i][1] = contest
	int dp[n+1][2];
	dp[0][0] = dp[0][1] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 2; j++) {
			if (ar[i] == 0) {
				dp[i][j] = min(dp[i-1][0], dp[i-1][1]) + 1;
			} else if (ar[i] == 1) {
				if (j == 0) {
					dp[i][j] = min(dp[i-1][0], dp[i-1][1]) + 1;
				} else if (j == 1) {
					dp[i][j] = min(dp[i-1][0], dp[i-1][1] + 1);
				}
			} else if (ar[i] == 2) {
				if (j == 0) {
					dp[i][j] = min(dp[i-1][0] + 1, dp[i-1][1]);
				} else if (j == 1) {
					dp[i][j] = min(dp[i-1][0], dp[i-1][1]) + 1;
				}
			} else if (ar[i] == 3) {
				if (j == 0) {
					dp[i][j] = min(dp[i-1][0] + 1, dp[i-1][1]);
				} else if (j == 1) {
					dp[i][j] = min(dp[i-1][0], dp[i-1][1] + 1);
				}
			}
		}
	}

	cout << min(dp[n][0], dp[n][1]) << '\n';
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


