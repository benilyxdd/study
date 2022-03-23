#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int pre[mxN], suf[mxN], ar[mxN];

void f(int n) {
	suf[n-1] = ar[n-1];
	for (int i = n-2; i >= 0; i--) {
		suf[i] = suf[i+1]+ar[i];
	}
	pre[0] = ar[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i-1]+ar[i];
	}
}

void solve() {
	memset(pre, 0, sizeof(pre));
	memset(suf, 0, sizeof(suf));
	memset(ar, 0, sizeof(ar));
	int n, q;
	cin >> n >> q;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		m[ar[i]] = i;
	}
	f(n);
	/*
	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
	*/
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		cout << min(suf[m[x]], pre[m[x]]) << "\n";
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

