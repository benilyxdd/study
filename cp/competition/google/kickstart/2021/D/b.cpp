#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n, c;
	cin >> n >> c;
	vector<array<ll, 2>> range(n);
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < 2; j++) {
			cin >> range[i][j];
		}
	}

	map<ll, ll> mp;
	for (ll i = 0; i < n; i++) {
		mp[++range[i][0]]++;
		mp[range[i][1]]--;
	}

	map<ll, ll, greater<ll>> ans;
	ll prev = (*mp.begin()).first;
	ll j = (*mp.begin()).second;
	for (pair<const ll, ll> &p : mp) {
		if (p == (*mp.begin())) {
			continue;
		}
		ll now = p.first;
		ans[j] += (now - prev);

		prev = now;
		j += p.second;
	}

	ll res = n;
	auto it = ans.begin();
	while (c > 0 && it != ans.end()) {
		ll mx = min(c, (*it).second);
		c -= mx;
		res += mx * (*it).first;
		it++;
	}
	cout << res << '\n';
}

signed main() {
	// freopen("input2.txt", "r", stdin);
	// freopen("output2.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

