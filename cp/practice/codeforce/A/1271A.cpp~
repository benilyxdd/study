#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int ans = 0;
	if (e > f) {
		int mn = min(a, d); 
		ans += mn * e;
		a -= mn;
		d -= mn;

		int mn2 = min(b, min(c, d));
		ans += mn2 * f;
	} else {
		int mn = min(b, min(c, d));
		ans += mn * f;
		b -= mn;
		c -= mn;
		d -= mn;

		int mn2 = min(a, d);
		ans += mn2 * e;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
