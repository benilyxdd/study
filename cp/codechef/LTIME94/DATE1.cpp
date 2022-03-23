#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int a, y, x;
	cin >> a >> y >> x;

	int ans = min(a, y)*x;
	if (y > a) {
		ans++;
	}
	cout << ans << '\n';
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

