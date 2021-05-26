#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;
const int mxN = (int)1e4;
int n, k, d, dp[mxN];

int path(int x) {
	if (x == n)
		return 1;
	if (x > n)
		return 0;
	if (dp[x] != -1) 
		return dp[x];
	
	int ans = 0;
	for (int i = 1; i <= k; i++) {
		ans += path(x+i);
	}
	return dp[x] = ans;
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n >> k >> d;
	cout << path(d);
	for (int i = 0; i <= k; i++)
		cout << dp[i] << ' ';
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

