#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int vp, vd, t, f, c;
	cin >> vp >> vd >> t >> f >> c;

	int ans = 0, u = (c+vp-1)/vp;
	for (int i = 1, p = 0, d = 0; i <= u; i++) {
		p += vp;
		if (p > c) {
			break;
		}
		if (i >= t) {
			d += vd;
		}

		if (d >= p) {
			ans++;
			int g = f+d/vd;
			d = 0;
			p += vp*g;
			i += g;
		}
	}
	cout << ans;
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

