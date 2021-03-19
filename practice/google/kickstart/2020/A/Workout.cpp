#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	int ar[n];
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	int l = 1, r = ar[n-1]-ar[0];
	while(l < r) {
		int m = (l+r)/2;
		int k2 = 0;
		for (int i = 1; i < n; i++) {
			int d = ar[i]-ar[i-1];
			k2 += (d-1)/m;
		}
		if (k2 <= k) {
			r = m;
		} else {
			l = m+1;
		}
	}
	cout << r << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
