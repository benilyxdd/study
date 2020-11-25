#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e7+6;
const int MOD = 998244353;
int n, n_xd;
ll dp[mxN];

int f(int x) {
	if (x == 0)
		return 1;
	if (dp[x] != -1)
		return dp[x];

	int res = 0;
	for (int i = 1; i <= x; i++) {
		if (x >= i) {
			res += f(x-i);
		}
	}
	
	return dp[x] = (res%MOD);
}

void solve() {
	cin >> n;
	n_xd = n*(n-1)/2;
	memset(dp, -1, sizeof(dp));
	f(n_xd);
	cout << dp[n] << "\n";
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


