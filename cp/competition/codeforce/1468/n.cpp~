#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int c1, c2, c3, a1, a2, a3, a4, a5;
	cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;
	c1 -= a1;
	c2 -= a2;
	c3 -= a3;
	if (c1 < 0 || c2 < 0 || c3 < 0) {
		cout << "NO\n";
		return;
	}

	int x = min(c1, a4);
	int y = min(c2, a5);
	c1-=x;
	c2-=y;
	a4-=x;
	a5-=y;

	if (a4+a5 > c3) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
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

