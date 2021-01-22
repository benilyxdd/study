#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll a, b;
	cin >> a >> b;
	ll mx = max(a, b);
	ll ans = (mx-1)*(mx-1);
	if (mx&1) {
		if (mx == a) {
			ans += b;
		} else {
			ans += b+(mx-a);
		}
	} else {
		if (mx == b) {
			ans += a;
		} else {
			ans += a+(mx-b);
		}
	}
	cout << ans << "\n";
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

