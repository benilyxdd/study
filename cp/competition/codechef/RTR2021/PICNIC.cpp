#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	ll ans = 0;
	for (int i = 1; i < n; i++) {
		if (ar[i] < ar[i - 1]) {
			ans += ar[i - 1] - ar[i];
			ar[i] = ar[i - 1];
		}
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

