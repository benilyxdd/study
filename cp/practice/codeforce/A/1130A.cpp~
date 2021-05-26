#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int po = 0, ne = 0, z = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x < 0) {
			ne++;
		} else if (x > 0) {
			po++;
		} else {
			z++;
		}
	}
	int x;
	if (n%2 == 0) {
		x = n/2;
	} else {
		x = n/2+1;
	}
	if (z > n/2 || max(po, ne) < x) {
		cout << 0 << "\n";
		return;
	}
	cout << (po > ne ? 1 : -1) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
