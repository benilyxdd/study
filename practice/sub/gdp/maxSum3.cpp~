//https://www.geeksforgeeks.org/recursively-break-number-3-parts-get-maximum-sum/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int dp[n+1];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i/2]+dp[i/3]+dp[i/4], i);
	}

	//for (int i = 0; i <= n; i++) {
		//cout << dp[i] << ' ';
	//}
	cout << dp[n]; 
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

