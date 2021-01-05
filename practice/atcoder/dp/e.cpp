#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)101;
int n, w;
array<int, 2> ar[mxN];

void solve() {
	cin >> n >> w;
	int total = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1];
		total += ar[i][1];
	}
	sort(ar, ar+n);

	int dp[mxN][total+1];
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= total+1; j++)
			dp[i][j] = (int)1e18;
	
	for (int i = 0; i <= total+1; i++)
		dp[0][i] = 0;

	for (int i = 0; i <= n; i++) 
		dp[i][0] = 0;	
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= total; j++) {
			if (j < ar[i-1][0])
				dp[i][j] = dp[i-1][j];
			else 
				dp[i][j] = max(dp[i-1][j], ar[i-1][1]+dp[i-1][j-ar[i-1][0]]);
		}
	}
	///*
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= total; j++) 
			cout << dp[i][j] << " ";
		cout << "\n";
	}
	//*/
	cout << dp[n][total] << "\n";
}

signed main() {
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

