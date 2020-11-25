#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, q;
	cin >> n >> q;
	int a[n], pre[n+1];
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	pre[0] = 0;
	pre[1] = a[0];
	for (int i = 1; i < n; i++) 
		pre[i+1] = pre[i]+a[i];
	/*	
	cout << "pre: ";
	for (int& x : pre) {
		cout << x << " ";
	}
	cout << "\n";
	*/
	while(q--) {
		int a, b;
		cin >> a >> b;
		cout << pre[b]-pre[a-1] << "\n";
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

