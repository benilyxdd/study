#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)101;
array<int, 2> ar[mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int dis = ar[i][0]*ar[i][0] + ar[j][0]*ar[j][0];
			if (ar[i][1]*ar[i][1] >= dis && ar[j][1]*ar[j][1] >= dis) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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

