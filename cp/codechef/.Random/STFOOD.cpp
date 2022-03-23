#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int a, b, c, n;
	cin >> n;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		int temp = b/(a+1);
		temp *= c;
		mx = max(temp, mx);
	}
	cout << mx << "\n";
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

