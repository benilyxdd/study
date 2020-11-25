#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int ans = 0;
	for (int i = 1; i < n; i++) {
		int xd = max(0LL, a[i-1]-a[i]);
		a[i] += xd;
		ans += xd;
	}
	cout << ans << "\n";
}

signed main() {
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

