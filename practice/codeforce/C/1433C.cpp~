#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, mx = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == mx) {
			if (i-1 > -1) {
				if (a[i-1] < a[i]) {
					cout << i+1 << "\n";
					return;
				}
			}
			if (i+1 < n) {
				if (a[i+1] < a[i]) {
					cout << i+1 << "\n";
					return;
				}
			}
		}
	}
	cout << "-1\n";
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

