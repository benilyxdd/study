#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	ll x = (ll)a * b;
	int lo = 0, hi = 1e9 + 7;
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		if (!(mid&1)) {
			mid++;
		}
		ll y = (ll)((mid / 2) + 1) * ((mid / 2) + 1);
		if (y >= x) {
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	cout << lo << '\n';
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

