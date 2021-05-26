#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll a, b;
	ll x, y, z;
	cin >> a >> b >> x >> y >> z;
	ll n = x * 2 + y;
	ll m = z * 3 + y;
	ll ans = 0;
	if (a < n) {
		ans -= a-n;
	}
	if (b < m) {
		ans -= b-m;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
