#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	int a[4*n];
	for (int i = 0; i < 4*n; i++) cin >> a[i];
	sort(a, a+4*n);
	
	int xd = a[0]*a[4*n-1];
	for (int i = 0; i < n; i++) {
		int l = 2*i, r = 4*n-2*i-1;
		if (a[l] != a[l+1] || a[r] != a[r-1] || a[l]*a[r] != xd) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main() {
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

