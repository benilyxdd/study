#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MOD = (int)1e9+7;
const int mxX = (int)1e6+6;
int n, x;
int a[mxX];
int dp[mxX];

int f(int y) {
	if (y == 0)
		return 1;
	if (y < 0) 
		return 0;
	if (dp[y] != -1) 
		return dp[y];

	int res = 0;
	for (int i = 0; i < n; i++) {
		if (y >= a[i]) {
			res += f(y-a[i]);
		}
	}
	return dp[y] = (res%MOD);
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	f(x);
	cout << dp[x] << "\n";
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

