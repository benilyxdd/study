#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	ll n;
	cin >> n;
	
	for (ll i = 0; i < n; i++) {
		ll n2 = n+i;
		ll x = 0, temp = n2;
		while (temp > 0) {
			x += temp % 10;
			temp /= 10;
		}
		if (__gcd(n2, x) > 1LL) {
			cout << n2 << '\n';
			break;
		}
	}
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

