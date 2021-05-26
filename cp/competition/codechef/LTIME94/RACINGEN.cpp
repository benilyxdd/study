#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int x, r, m;
	cin >> x >> r >> m;
	if (m < r) {
		cout << "NO\n";
		return;
	}

	int all = x;
	int need = r*60LL;
	need -= x;
	all += need*2;

	m *= 60LL;
	if (all <= m) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
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

