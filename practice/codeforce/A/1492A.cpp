#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int p, a, b, c;
	cin >> p >> a >> b >> c;

	int x = (p % a == 0 ? 0 : a - p % a);
	int y = (p % b == 0 ? 0 : b - p % b);
	int z = (p % c == 0 ? 0 : c - p % c);
	int ans = min({x, y, z});
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


