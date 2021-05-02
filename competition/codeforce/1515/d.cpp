#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void debug(map<int, array<int, 2>>& all) {
	for (auto& p : all) {
		cout << p.first << ' ';
		cout << p.second[0] << ' ' << p.second[1] << '\n';
	}
	cout << '\n';
}

void solve() {
	int n, l, r, ans = 0;
	cin >> n >> l >> r;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	// construct map
	map<int, array<int, 2>> all;
	for (int i = 0; i < n; i++) {
		if (i < l) {
			all[ar[i]][0]++;
		} else {
			all[ar[i]][1]++;
		}
	}

	// already paired
	for (pair<const int, array<int, 2>>& p : all) {
		int mn = min(p.second[0], p.second[1]);
		p.second[0] -= mn;
		p.second[1] -= mn;
	}

	int left = 0, right = 0;
	for (pair<const int, array<int, 2>>& p : all) {
		left += p.second[0];
		right += p.second[1];
	}

	bool lbr = left > right;
	int need = 0;
	for (pair<const int, array<int, 2>>& p : all) {
		ans += p.second[lbr] / 2;
		p.second[lbr] %= 2;
		need += p.second[lbr];
	}

	for (pair<const int, array<int, 2>>& p : all) {
		if (need > 0 && p.second[(1 + lbr) % 2] & 1) {
			p.second[(1 + lbr) % 2]--, need--, ans++;
		}
	}

	for (pair<const int, array<int, 2>>& p : all) {
		if (need > 0) {
			int mx = min(need, p.second[(1 + lbr) % 2]);
			need -= mx;
			p.second[(1 + lbr) % 2] -= mx;
			ans += mx;
		}
	}
	assert(need == 0);

	for (pair<const int, array<int, 2>>& p : all) {
		ans += p.second[(1 + lbr) % 2] / 2;
		p.second[(1 + lbr) % 2] %= 2;
	}

	int remain = 0;
	for (pair<const int, array<int, 2>>& p : all) {
		remain += p.second[(1 + lbr) % 2];
		assert(p.second[(1 + lbr) % 2] == 1 || p.second[(1 + lbr) % 2] == 0);
	}

	if (left == right) {
		cout << min(left, ans + remain);
	} else {
		cout << ans + remain;
	}
	cout << '\n';
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

