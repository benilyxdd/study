#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int x = abs(x1 - x2) + abs(y1 - y2);
	if (x1 == x2 && x2 == x3 && (y3 > y2 && y3 < y1 || y3 > y1 && y3 < y2)) {
		x += 2;
	}
	if (y1 == y2 && y2 == y3 && (x3 > x2 && x3 < x1 || x3 > x1 && x3 < x2)) {
		x += 2;
	}
	cout << x << '\n';
}

int main() {
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
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

