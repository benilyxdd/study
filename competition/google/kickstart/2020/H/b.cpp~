#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll n) {
	string s = to_string(n);
	int len = s.length();
	for (int i = 1; i <= len; i++) {
		if (i%2 != (s[i-1]-'0')%2) return false;
	}
	return true;
}

void solve() {
	ll a, b; cin >> a >> b;
	int res = 0;
	for (ll i = a; i <= b; i++) {
		res += check(i);
	}
	cout << res << "\n";
}

signed main() {
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
