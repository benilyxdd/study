#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll findk2(ll n, ll k) {
	ll lo = 0, hi = n / k;
	while (lo < hi) {
		ll mid = lo + (hi - lo) / 2;
		ll x = (ll)(k + k + mid - 1) * mid / 2;
		if (x > n) {
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	return lo;
}

void solve() {
	ll n;
	cin >> n;

	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		ll k2 = findk2(n, i);
		ll x = (ll)(2 * i + (k2 - 1)) * k2 / 2, y;
		if (x > n) {
			y = (ll)x - (i + k2 - 1);
		} else {
			y = (ll)x + (i + k2);
		}
		if (x == n || y == n) {
			ans++;
		}
	}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

