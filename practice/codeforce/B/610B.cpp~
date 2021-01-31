#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 200002;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int la = 0, save = ar[0];
	for (int i = 1; i < n; i++) {
		if (ar[i] <= save) {
			save = ar[i];
			la = i;
		}
	}
	
	ll ans = n*save;
	int gg = 0;
	bool ok = false;
	for (int i = la+1;; i++) {
		if (i == n) {
			i = 0;
		}
		if (ar[i] == save && (i != la || !ok)) {
			ans += gg;
			gg = 0;
			ok = 1;
		} else {
			gg++;
		}

		if (i == la && !ok) {
			ans -= gg;
			break;
		}
		if (i == la) {
			break;
		}
	}

	cout << ans;
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

