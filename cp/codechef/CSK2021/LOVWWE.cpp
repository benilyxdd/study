#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int a, b, z;
	cin >> a >> b >> z;

	a %= z;
	b %= z;

	if (a + b < z) {
		cout << 0 << '\n';
	} else {
		cout << z - max(a, b) << '\n';
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

