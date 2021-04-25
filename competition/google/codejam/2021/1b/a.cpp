#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll all = (ll)1e10 * 12LL;
const ll sec = (ll)all / 60LL;

pair<bool, array<ll, 4>> ok(ll h, ll m, ll s) {
	bool go = true;

	ll h_mod = h % 1;
	ll m_mod = m % 12;
	ll s_mod = s % 720;

	if (m_mod * 60 != s_mod) {
		go = false;
	}
	if (h_mod * 12 != m_mod) {
		go = false;
	}

	if (!go) {
		return {false, {-1, -1, -1, -1}};
	}

	ll res_s = s / sec;
	ll res_m = m / 60LL / sec;
	ll res_h = h / 60LL / sec;
	ll res_ns = s_mod;

	if (res_s > 59 || res_m > 59 || res_h > 11) {
		return {false, {-1, -1, -1, -1}};
	}
	return {true, {res_h, res_m, res_s, res_ns}};
}

void solve() {
	ll ar[3];
	for (int i = 0; i < 3; i++) {
		cin >> ar[i];
	}
	bool first = true;
	ll f = 12 - ar[1] % 12;

	for (int i = 0; i < 360000; i++) {
		sort(ar, ar + 3);
		do {
			pair<bool, array<ll, 4>> go = ok(ar[0], ar[1], ar[2]);
			if (go.first) {
				for (ll& x : go.second) {
					cout << x << ' ';
				}
				cout << '\n';
				return;
			}
		} while (next_permutation(ar, ar + 3));

		for (int j = 0; j < 3; j++) {
			ar[j] += (first ? f : 12);
		}
		f = false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	// cout << "SEC " << sec << '\n';
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

