#include <bits/stdc++.h>
using namespace std;

#define ll long long
// #define int ll

void solve() {
	int D, d, p, q;
	cin >> D >> d >> p >> q;

	ll ans = (ll)D * p;

	int period = D / d;
	int left = D - period * d;

	ans += (ll)(period * (period - 1) / 2 * q) * d;
	ans += (ll)left * period * q;

	cout << ans << '\n';
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

