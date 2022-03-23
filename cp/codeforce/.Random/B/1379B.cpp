#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll l, r, m;
	cin >> l >> r >> m;

	while (l > r) {
		int mid = (l + r) / 2;
		int l2 = l, r2 = r;
		while (l2 > r2) {
			int mid2 = (l2 + r2) / 2;

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

