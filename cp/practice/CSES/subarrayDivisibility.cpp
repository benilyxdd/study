#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<ll> ar(n);
	for (ll &x : ar) {
		cin >> x;
	}
	vector<ll> prefix(n + 1);
	partial_sum(ar.begin(), ar.end(), ++prefix.begin());
	for (ll &x : prefix) {
		x %= n;
	}
	map<int, int> cnt;
	ll ans = 0;
	for (ll &x : prefix) {
		cnt[(x % n + n) % n]++; // for negative number !!!!!
	}
	for (pair<const int, int> &p : cnt) {
		ans += 1LL * p.second * (p.second - 1) / 2;
	}
	cout << ans << '\n';
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

