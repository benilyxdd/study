#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
const int mxT = 1001;
int ar[mxN], tar, n, dp[mxT];

void solve() {
	cin >> n >> tar;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	for (int i = 1; i <= tar; i++) {
		dp[i] = INT_MAX;
	}
	dp[0] = 0;
	for (int i = 1; i <= tar; i++) {
		for (int j = 0; j < n; j++) {
			if (ar[j] <= i) {
				dp[i] = min(dp[i], dp[i-ar[j]]+1);
			}
		}
	}
	//for (int i = 0; i <= tar; i++) {
		//cout << dp[i] << ' ';
	//}
	if (dp[tar] == -INT_MAX || dp[tar] == INT_MAX) {
		cout << "IMPOSSIBLE\n";
	} else {
		cout << dp[tar];
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

