#include <bits/stdc++.h>
using namespace std;

#define ll long long
int k, x, y;

void solve() {
	while(cin >> k && k != 0) {
		cin >> x >> y;
		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			if (a == x || b == y) {
				cout << "divisa\n";
			} else if (a > x) {
				if (b > y) {
					cout << "NE\n";
				} else {
					cout << "SE\n";
				}
			} else {
				if (b > y) {
					cout << "NO\n";
				} else {
					cout << "SO\n";
				}
			}
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


