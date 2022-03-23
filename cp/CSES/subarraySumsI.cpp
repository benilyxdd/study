//https://cses.fi/problemset/task/1660 - v1
//https://cses.fi/problemset/task/1661 - v2

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<ll> ar(n);
	for (ll &x : ar) {
		cin >> x;
	}

	ll ans = 0, prefix = 0;
	map<ll, int> cnt;
	cnt[0] = 1;
	for (ll &x : ar) {
		prefix += x;
		ans += cnt[prefix - k];
		cnt[prefix]++;
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

