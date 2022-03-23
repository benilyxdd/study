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
	vector<ll> prefix(n + 1, 0);
	partial_sum(ar.begin(), ar.end(), ++prefix.begin());
	for (int i = 0; i < n; i++) {
		prefix[i] %= 7;
	}

	ll mx = 0;
	vector<set<ll>> cnt(7);
	for (int i = 0; i < n; i++) {
		cnt[prefix[i]].insert(i);
	}

	for (set<ll> &s : cnt) {
		if (s.size() > 0) {
			mx = max(mx, abs(*(--s.end()) - (*s.begin())));
		}
	}
	cout << mx << '\n';
}

int main() {
	freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
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

