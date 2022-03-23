#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, pos, l, r;
	cin >> n >> pos >> l >> r;

	if (l == 1 && r == n) {
		cout << 0;
	} else if (l == 1 && r != n) {
		cout << abs(pos - r) + 1;
	} else if (l != 1 && r == n) {
		cout << abs(pos - l) + 1;
	} else {
		cout << r - l + min(abs(pos - r), abs(pos - l)) + 2;
	}
	cout << '\n';
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

