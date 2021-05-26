#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1000000007;
int dp[7][7][7][7][7][7];
ll a, b, c, d, e, f, n;

ll dpp(ll ca, ll cb, ll cc, ll cd, ll ce, ll cf, ll to) {
	if (ca > a || cb > b || cc > c || cd > d || ce > e || cf > f)
		return 0;
	if (to == n)
		return 1;

	if (dp[ca][cb][cc][cd][ce][cf] != -1) 
		return dp[ca][cb][cc][cd][ce][cf];
	
	ll ans = 0;
	ans += dpp(ca+1, cb, cc, cd, ce, cf, to+1);
	ans += dpp(ca, cb+1, cc, cd, ce, cf, to+1);
	ans += dpp(ca, cb, cc+1, cd, ce, cf, to+1);
	ans += dpp(ca, cb, cc, cd+1, ce, cf, to+1);
	ans += dpp(ca, cb, cc, cd, ce+1, cf, to+1);
	ans += dpp(ca, cb, cc, cd, ce, cf+1, to+1);
	
	ll x = ans%MOD;	
	dp[ca][cb][cc][cd][ce][cf] = x;
	return x;
	
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> a >> b >> c >> d >> e >> f >> n;
	cout << dpp(0, 0, 0, 0, 0, 0, 0);
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

