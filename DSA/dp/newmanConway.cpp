//https://www.geeksforgeeks.org/newman-conway-sequence/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, dp[mxN];

void solve() {
	cin >> n;

	dp[1] = dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[dp[i-1]] + dp[i-dp[i-1]];
	}

	for (int i = 1; i <= n; i++)  
		cout << dp[i] << ' ';
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

