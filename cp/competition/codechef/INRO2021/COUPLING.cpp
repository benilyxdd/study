#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) {
		if (a[i] == 2) {
			cout << 1 << " ";
		} else {
			cout << (a[i]^2) << " ";
		}
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

