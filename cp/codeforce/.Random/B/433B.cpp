#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int ar[mxN], n, m, pre[mxN], pre2[mxN];

void f() {
	pre[0] = ar[0];
	for (int i = 1; i < n; i++) {
		pre[i] = ar[i]+pre[i-1];
	}
	
	sort(ar, ar+n);
	pre2[0] = ar[0];
	for (int i = 1; i < n; i++) {
		pre2[i] = ar[i]+pre2[i-1];
	}
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	f();

	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			cout << pre[c-1] - pre[b-2] << "\n";
		} else {
			cout << pre2[c-1] - pre2[b-2] << "\n";	
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

