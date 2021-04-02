//https://www.geeksforgeeks.org/longest-alternating-positive-negative-subarray-starting-every-index/
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
	
	int dp[n];
	memset(dp, 0, sizeof(dp));
	dp[n-1] = 1;
	for (int i = n-2; i >= 0; i--) {
		dp[i] = 1;
		if ((ar[i+1] > 0 && ar[i] < 0) || (ar[i+1] < 0 && ar[i] > 0)) {
			dp[i] = dp[i+1] + 1;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
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

