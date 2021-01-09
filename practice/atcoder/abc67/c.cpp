#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	int t = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		t += ar[i];
	}

	int ans = (int)1e18, x = 0;
	for (int i = 0; i < n; i++) {
		x += ar[i];
		if (i < n-1)
			ans = min(ans, abs(t-2*x));
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

