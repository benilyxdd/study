#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN =  (int)2e5+5;
int ar[mxN], n, dp[mxN];

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	dp[0] = 0;
	dp[1] = abs(ar[1]-ar[0]);
	for (int i = 2; i < n; i++) 
		dp[i] = min(dp[i-1]+abs(ar[i]-ar[i-1]), dp[i-2]+abs(ar[i]-ar[i-2]));
	cout << dp[n-1];
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

