#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int _gcd(int x, int y) {
	if (x == 0)
		return y;
	return _gcd(y%x, x);
}

int mf(int gcd, int n) {
	int mx = 0;
	for (int i = 1; i*i <= gcd; i++) {
		if (gcd%i == 0) {
			if (i <= n)
				mx = max(mx, i);
			if (gcd/i <= n)
				mx = max(mx, gcd/i);
		}
	}
	return mx;
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> ar(m);
	for (int i = 0; i < m; i++)
		cin >> ar[i];

	int gcd = ar[0];
	for (int i = 1; i < m; i++)
		gcd = _gcd(gcd, ar[i]);

	if (gcd > n) {
		gcd = mf(gcd, n);
	}
	cout << n-gcd << '\n';
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


