#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, m, k, xc, yc;

void solve() {
	cin >> n >> m >> xc >> yc >> k;
	ll ans = 0;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;

		ll x = (int)1e18, y = (int)1e18;
		if (a < 0) {
			x = (xc-1)/a;	
		} else if (a > 0) {
			x = (n-xc)/a;
		}

		if (b < 0) {
			y = (yc-1)/-b;
		} else if (b > 0) {
			y = (m-yc)/b;
		}
		int mn = min(abs(x), abs(y));
		xc += mn*a;
		yc += mn*b;

		ans += mn;
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

