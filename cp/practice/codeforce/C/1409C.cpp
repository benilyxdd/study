#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, x, y; cin >> n >> x >> y;
	cout << x << " " << y << " ";
	n-=2;
	int c = y-x, d;
	for (int i = n; i > 0; i--) {
		if (c%(i+1) == 0) {
			d = i+1;
			break;
		}
	}
	
	for (int i = 1; i <= n; i++) {
		int xdd = x+((c/d*i));
		if (xdd < y) {
			cout << xdd << " ";
		} else {
			break;
		}
	}
	cout << "\n";
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

