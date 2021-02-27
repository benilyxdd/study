#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	set<ll> s;

	for (ll i = 2; i*i <= n; i++) {
		ll x = i;
		while(x*i <= n) {
			x *= i;
			s.insert(x);
		}
	}
	//for (const int& x : s) {
		//cout << x << ' ';
	//}
	cout << n-s.size() << '\n';
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

