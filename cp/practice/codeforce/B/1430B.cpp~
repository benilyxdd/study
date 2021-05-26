#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, k;
	cin >> n >> k;
	int d[n];
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	sort(d, d+n, greater<>());
	for (int i = 1; i <= k; i++) {
		d[0] += d[i];
	}
	cout << d[0] << "\n";
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

