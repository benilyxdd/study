#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x = a - b;
	if (x <= 0) {
		cout << b << "\n";
		return;
	} else {
		int y = c - d;
		if (y <= 0) {
			cout << -1 << "\n";
			return;
		} else {
			int z;
			if (x%y == 0) {
				z = x/y;
			} else {
				z = x/y+1;
			}
			ll ans = (ll)b + (ll)z*(ll)c;
			cout << ans << "\n";
			return;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
