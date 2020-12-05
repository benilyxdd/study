#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int a, b;
	cin >> a >> b;
	ll ans = 0;
	ans += (a/2)*(b/2);
	int x, y;
	if (a&1) {
		x = a/2+1;
	} else {
		x = a/2;
	}
	if (b&1) {
		y = b/2+1;
	} else {
		y = b/2;
	}
	ans += x*y;
	cout << ans << "\n";
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

