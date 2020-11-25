#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	vector<ll> v;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
	}

	v.push_back(0);
	ll ans = 0;
	ll turns = 1;
	ll x, y;
	for (int i = 1; i < v.size()-1; i++) {
		x = v[i-1];
		y = v[i];
		if (turns%2) {
			if (x == 1) {
				ans++;
				if (y == 0) {
					i++;
				}
			} else if (y == 0) {
				i++;
			}
			turns++;
		} else {
			if (y == 1) {
				i++;
			}
			turns++;
		}
	}
	cout << ans << "\n";
}

int main() {
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

