#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;
	int step = 0;
	int w = 0;
	while(true) {
		int x = a.length() - w - 1;
		int y = b.length() - w - 1;
		if (x >= 0 && y >= 0 && a[x] == b[y]) {
			w++;
		} else {
			break;
		}
	}
	cout << a.length() + b.length() -2*w << "\n";
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

