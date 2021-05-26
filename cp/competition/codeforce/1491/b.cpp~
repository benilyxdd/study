#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e6+6;
int n, u, v, ar[mxN];

void solve() {
	set<int> s;
	cin >> n >> u >> v;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		s.insert(ar[i]);
	}

	if (s.size() == 1) {
		int ans = v;
		if (u > v) {
			ans += v;
		} else {
			ans += u;
		}
		cout << ans << '\n';
		return;
	}

	bool ok = false;
	for (int i = 0; i < n-1; i++) {
		int x = abs(ar[i]-ar[i+1]);
		if (x > 1) {
			ok = true;
			break;
		}
	}

	if (ok) {
		cout << "0\n";
	} else {
		if (u > v) {
			cout << v << '\n';
		} else {
			cout << u << '\n';
		}
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

