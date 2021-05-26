#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1001;
pair<int, int> ar[mxN], ar2[mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		ar[i] = {a, i};
		ar2[i] = {b, i};
	}
	
	int mn = (int)1e9;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				mn = min(ar[i].first+ar2[i].first, mn);
			} else {
				mn = min(mn, max(ar[i].first, ar2[j].first));
			}
		}
	}
	cout << mn;
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

