#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int a, b, n, q, ar[mxN], pre[mxN];

void f() {
	pre[1] = ar[1];
	for (int i = 2; i <= n; i++) {
		pre[i] = pre[i-1]^ar[i];
	}
}

void solve() {
	cin >> n >> q;
	for (int i = 1; i <= n; i++) 
		cin >> ar[i];

	f();
	while(q--) {
		cin >> a >> b;
		if (a == 0) {
			cout << (pre[b]) << "\n";
		} else {
			cout << (pre[b]^pre[a-1]) << "\n";
		}
	}
}

int main() {
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

