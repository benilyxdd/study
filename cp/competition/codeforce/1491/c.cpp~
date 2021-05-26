#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 5003;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int ans = 0;
	bool ok;
	while(true) {
		ok = true;
		int pos = 0;
		for (int i = 0; i < n; i++) {
			if (ar[i] > 1) {
				ok = false;
				pos = i;
				break;
			}
		}
		if (ok) {
			cout << ans << '\n';
			return;
		}
		ans++;

		for (int i = pos; i < n; i++) {
			int temp = ar[i];
			ar[i] = max(ar[i]-1, 1LL);

			i += temp-1;
		}
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

