#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a, b;

void solve() {
	cin >> a >> b;
	string x = a, y = b;
	int ax = a.length(), bx = b.length();
	int lcm = ax*bx/__gcd(ax, bx);
	for (int i = 0; i < lcm/ax-1; i++) {
		x += a;
	}
	for (int i = 0; i < lcm/bx-1; i++) {
		y += b;
	}
	//cout << x << "\n" << y << "\n";
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != y[i]) {
			cout << "-1\n";
			return;
		}
	}
	cout << x << "\n";
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

