#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, g, b; cin >> n >> g >> b;
	int ans = 0;
	if (g < b) {
		int period = n/(2*g);
		ans = period*(g+b);
		if (n%(2*g) == 0) {
			ans -= b;
		} else {
			ans += n%(2*g);
		}
	} else {
		int period = n/(g+b);
		ans = period*(g+b);
		ans += n%(g+b);
	}
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

