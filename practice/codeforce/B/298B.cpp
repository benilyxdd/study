#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok(int x, int y, int ex, int ey) {
	return (x == ex && y == ey);
}

void go(char c, int& sx, int& sy) {
	if (c == 'E') {
		sx++;
	} else if (c == 'S') {
		sy--;
	} else if (c == 'W') {
		sy--;
	} else if (c == 'N') {
		sy++;
	}
}

void solve() {
	int t, sx, sy, ex, ey;
	string s;
	cin >> t >> sx >> sy >> ex >> ey >> s;
	for (int i = 0; i < t; i++) {
		go(s[i], sx, sy);
		if (ok(sx, sy, ex, ey)) {
			cout << i+1;
			return;
		}
	}
	cout << -1;
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

