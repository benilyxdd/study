#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int x, y;
	cin >> x >> y;
	vector<int> ar(x);
	for (int &x : ar) {
		cin >> x;
	}

	vector<int> pos(x, -1);
	bool ok = 1;
	for (int i = 0; i < x; i++) {
		if (y % 2 == 0 && ar[i] == y / 2) {
			pos[i] = ok;
			ok ^= 1;
		} else if (ar[i] * 2 < y) {
			pos[i] = 0;
		} else {
			pos[i] = 1;
		}
	}

	for (int &x : pos) {
		cout << x << ' ';
	}
	cout << '\n';
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

