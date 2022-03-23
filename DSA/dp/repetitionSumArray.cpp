//https://www.geeksforgeeks.org/ways-sum-n-using-array-elements-repetition-allowed/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, tar;
	cin >> n >> tar;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int dp[tar+1];
	memset(dp, 0, sizeof(dp));

	dp[0] = 1;
	for (int i = 1; i <= tar; i++) {
		for (int j = 0; j < n; j++) {
			if (i >= ar[j]) {
				dp[i] += dp[i-ar[j]];
			}
		}
	}
	for (int i = 0; i <= tar; i++) {
		cout  << dp[i] << ' ';
	}
	cout << '\n';
	cout << "Ans: " << dp[tar] << '\n';
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

