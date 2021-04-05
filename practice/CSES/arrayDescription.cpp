#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	ll dp[n+1];
	dp[0] = 1;
	
	for (int i = 1; i <= n; i++) {
		if (ar[i-1] == 0) {
			dp[i] = dp[i-1];
		} else {
			int cnt = 0;
			

		}

	}	
	cout << dp[n] << '\n';
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

