#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int& x : a) {
		cin >> x;
	}
	for (int& x : b) {
		cin >> x;
	}

	int lo = 0, hi = 10000;
	for (int i = 0; i < n; i++) {
		lo = max(lo, a[i]);
		hi = min(hi, b[i]);
	}
	// cout << lo << ' ' << hi << '\n';
	cout << max(0, hi - lo + 1);
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

