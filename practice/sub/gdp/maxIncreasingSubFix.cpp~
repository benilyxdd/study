#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int n, m, k, ar[mxN], dp[mxN];

void debug() {
	cout << '\n';
	cout << "DP: " << '\n';
	for (int i = 0; i < n; i++) 
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	memcpy(dp, ar, sizeof(ar));
	
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < i; j++) {
			if (ar[i] > ar[j]) {
				dp[i] = max(dp[i], dp[j]+ar[i]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (ar[i] < ar[k]) {
			dp[k] = max(dp[k], dp[i]+ar[k]);
		}
	}
	debug();
	cout << dp[k] << '\n';
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

