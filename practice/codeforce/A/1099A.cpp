#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, x1, y1, x2, y2;
	cin >> a >> b >> x1 >> y1 >> x2 >> y2;
	while(b > 0) {
		a += b;
		if (b == y1) {
			a -= x1;
			if (a < 0) {
				a = 0;
			}
		}
		if (b == y2) {
			a -= x2;
			if (a < 0) {
				a = 0;
			}
		}
		b--;
	}
	cout << a << "\n";
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
