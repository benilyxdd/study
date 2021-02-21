#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 1e5+5;
int n, k, ar[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int save = 0;
	for (int i = 1; i < mxN; i++) {
		int x = i*(i+1)/2;
		int y = i*(i-1)/2;
		if (x > k) {
			k -= y;
			save = i-1;
			break;
		}
	}
	if (k == 0) {
		cout << ar[save-1];
		return;
	}
	for (int i = 0; i < n; i++) {
		if (i+1 == k) {
			cout << ar[i];
			break;
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

