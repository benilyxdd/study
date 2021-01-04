#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, m, t;
	cin >> n >> m >> t;
	int mx = n;
	int now = 0;
	bool ok = false;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		n -= a-now;
		if (n <= 0) 
			ok = 1;
		n += b-a;
		n = min(mx, n); 
		now = b;
	}
	n -= t-now;
	cout << (n <= 0 || ok ? "No" : "Yes") << "\n";

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

