#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int MAX = (int)1e9+7;

void solve() {
	int n, x, y, cnt = 0;
	cin >> n >> x >> y;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= 0) 
			cnt++;
	}
	if (cnt == n) {
		cout << *max_element(a, a+n);
		return;
	}
	int x = -MAX, y = 0;
	for (int i = 0; i < n; i++) {
		y += a[i];
		x = max(x, y);
		if (y < 0)
			y = 0;
	}
	cout << x << "\n";
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

