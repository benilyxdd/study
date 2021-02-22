#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 10000;
int ar[mxN], n, k;
int dp[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	dp[0] = 1;
	for (int j = 0; j < n; j++) {
		for (int i = 1; i <= k; i++) {
			if (ar[j] <= i) {
				dp[i] += dp[i-ar[j]];
			}
		}
	}
	cout << dp[k] << "\n";
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

