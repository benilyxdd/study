#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int ok[mxN], ok2[mxN];
int n, m, wid, len;

void solve() {
	cin >> n >> m;
	int ans = n*n;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		if (!ok[a]) {
			ans -= n;
			ans += wid;
			ok[a]++, len++;
		}
		if (!ok2[b]) {
			ans -= n;
			ans += len;
			ok2[b]++, wid++;
		}

		cout << ans << ' ';
	}
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

