#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int n, ar[mxN];

void solve() {
	//cin
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	//process
	ll ans = 0, mx = 0;
	for (int i = n-1; i > 0; i--) {
		ll x = abs(ar[i]-ar[i-1]);
		ll y = abs(ar[i]-ar[i-2]);
		ll z = abs(ar[i-1]-ar[i-2]);
		ans += x;
		if (i == 1) {
			mx = max(mx, x);
			break;
		}
		if (i == n-1) {
			mx = max(mx, x);
		}
		mx = max(mx, x+z-y);
	}
	cout << ans-mx << "\n";
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

