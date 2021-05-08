#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int a, b;
	cin >> a >> b;
	int tgt = a * b;
	if (b == 1) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	if (tgt - a == a || b == 2) {
		cout << a << ' ' << tgt * 2LL - a << ' ' << tgt * 2LL << '\n';
	} else {
		cout << a << ' ' << tgt - a << ' ' << tgt << '\n';
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

