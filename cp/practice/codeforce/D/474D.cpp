#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MOD = (int)1e9+7;
const int MAX = (int)1e5+5;
int t, k, a, b;
int dp[MAX];
int pre[MAX];

int f(int n) {
	if (n == 0) 
		return 1;
	if (dp[n] != -1) 
		return dp[n];

	int x = 0, y = 0;
	if (n >= k)
		x = f(n-k);
	
	y = f(n-1);

	return dp[n] = (x+y)%MOD;
}

void xd() {
	pre[0] = dp[0];
	for (int i = 1; i < MAX; i++) {
		pre[i] = (pre[i-1] + dp[i])%MOD;
	}
}
/*
int f(int k) {
	//init
	for (int i = 0; i < k; i++)
		dp[i] = 0;
	dp[k] = 1;

	//dp
	for (int i = k+1; i < MAX; i++) {
		
	}
}
*/


void solve() {
	cin >> t >> k;
	memset(dp, -1, sizeof(dp));
	f(MAX-1);
	xd();
	//cout << "DP\n";
	//for (int& x : dp) {
	//	cout << x << " ";
	//}
	cout << "\n";
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout <<	(pre[b]-pre[a-1]+MOD)%MOD << "\n";
	}
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


