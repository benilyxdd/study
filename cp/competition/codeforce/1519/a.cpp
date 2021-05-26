#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int r, b, d;
	cin >> r >> b >> d;

	int mn = min(r, b);
	int mx = mn * (d + 1);
	if (mx >= max(r, b)) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
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

