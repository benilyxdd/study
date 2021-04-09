#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, m, x;
	cin >> n >> m >> x;

	int a = x / n;
	int b = (x % n == 0 ? n : x % n);
	if (b != n) {
		a++;
	}
	b--;
	// cout << a << ' ' << b << '\n';
	cout << b * m + a << '\n';
	// cout << '\n';
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

