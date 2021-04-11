#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int x, y, x2, y2, t;
	cin >> x >> y >> x2 >> y2 >> t;

	int dis = max(abs(x2 - x), abs(y2 - y));
	cout << (dis > t ? "No" : "Yes") << '\n';
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

