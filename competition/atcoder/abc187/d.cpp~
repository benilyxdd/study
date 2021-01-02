#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int n, as = 0;
array<int, 3> ar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int c = a+b+a;
		ar[i][0] = c;
		ar[i][1] = a;
		ar[i][2] = b;
		as += a;
	}
	sort(ar, ar+n, greater<>());
	
	int cnt = 0, now = 0, i = -1;
	while(now <= as) {
		cnt++, i++;
		now += ar[i][1]+ar[i][2];
		as -= ar[i][1];
	}
	cout << cnt << "\n";
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

