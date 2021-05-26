#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MOD = 1000000007;

ll power(ll x, ll y) {
	if (y == 0)
		return 1;
	else if (y%2 == 0)
		return (power(x, y/2)*power(x, y/2))%MOD;
	else
		return (x*power(x, y/2)*power(x, y/2))%MOD;
}

void solve() {
	ll n, m;
	cin >> n >> m;
	ll ans = 1;
	for (ll i = 0; i < n; i++) {
		if (i&1) {
			ans = (ll)(ans*power(i+1, m))%MOD;
		}
	}
	cout << ans << "\n";
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

