#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int ar[mxN], n, x;

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	sort(ar, ar+n);
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += ar[i]*x;
		x = max(x-1, 1LL);
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

