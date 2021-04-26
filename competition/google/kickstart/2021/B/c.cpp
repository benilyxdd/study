#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int findNext(int n, int add) {
	while (true) {
		bool ok = true;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				ok = false;
			}
		}
		if (!ok) {
			n += add;
		} else {
			return n;
		}
	}
}

void solve() {
	int n;
	cin >> n;

	int x = sqrt(n);
	int hi = findNext(x + 1, 1);
	int lo = findNext(x, -1);

	if (hi * lo > n) {
		hi = findNext(x - 1, -1);
	}
	if (hi == lo) {
		hi = findNext(hi - 1, -1);
	}
	cout << hi * lo << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

