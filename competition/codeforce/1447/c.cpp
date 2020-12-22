#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, cnt = 0;
	ll w, sum = 0;
	cin >> n >> w;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		if (a[i] > w) {
			cnt++;
		}
	}
	if (cnt == n || sum < w/2) {
		cout << -1 << "\n";
	} else {
		bool x = false;
		for (int i = 0; i < n; i++) {
			if (a[i] >= w/2 && a[i] < w) {
				cout << 1 << "\n";
				cout << i+1 << "\n";
				x = true;
				return;
			}
		}
		if (!x) {
			ll res = 0;
			vector<ll> pos;
			for (ll i = 0; i < n; i++) {
				res += a[i];
				pos.push_back(i);
				if (res > w) {
					res -= a[i];
					pos.pop_back();
				} else if (res > w/2 && res <= w) {
					break;
				}
			}
			cout << pos.size() << "\n";
			for (ll& xd : pos) {
				cout << xd+1 << " ";
			}
			cout << "\n";
		}
	}
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

