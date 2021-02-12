#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, x, y;
	cin >> a >> x >> y;

	int w = a/2;
	int h = y/a;
	if (y == 0) {
		cout << -1;
		return;
	}

	if (h == 0 && y != 0) {
		if (x >= -w && x <= w) {
			cout << 1;
		} else {
			cout << -1;
		}
		return;
	}

	h--;
	if (h&1) {
		if (x >= -w && x <= w) {
			cout << 2+3*(h-1);
		} else {
			cout << -1;
		}
	} else {
		if (x >= -a && x <= a) {
		
		} else {
			cout << -1;
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

