#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int half = n/2;
	int x = 0;
	bool ok = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || j == x) {
				cout << '*';
			} else {
				cout << ' ';
			}
		}
		if (x == half) {
			ok = 1;
		}
		x += (ok ? -1 : 1);
		cout << "\n";
	}
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

