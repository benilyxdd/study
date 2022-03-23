//https://judge.yosupo.jp/problem/associative_array

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	unordered_map<ll, ll> m; // [index, number];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int q;
		cin >> q;
		if (q == 0) {
			ll k, v;
			cin >> k >> v;
			m[k] = v;
		} else {
			ll k;
			cin >> k;
			if (m.find(k) == m.end()) {
				cout << 0 << '\n';
			} else {
				cout << m[k] << '\n';
			}
		}
	}
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

