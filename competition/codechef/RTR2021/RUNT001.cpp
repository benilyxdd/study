#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int m, n, k;
	cin >> m >> n >> k;
	vector<int> ar(m);
	for (int& x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());

	int ans = 0;
	for (int i = 0, j = 0; i < m; i++, j++) {
		if (j < k) {
			ans += n - ar[i];
		} else {
			ans += ar[i];
		}
	}
	cout << ans << '\n';
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

