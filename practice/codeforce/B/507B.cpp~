#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int r, x1, y1, x2, y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;

	//x += r*2/ y += r*2 / x&y += r;
	int dia = abs(min(x1-x2, y1-y2));
	int ans = 0;
	if (x1 != x2 && y1 != y2) {
		ans += dia/r;
	}
	int dis1 = abs(x1-x2);
	int dis2 = abs(y1-y2);
	dis1 -= dia;
	dis2 -= dia;
	dis1 = abs(dis1);
	dis2 = abs(dis2);

	r = 2*r;
	ans += (dis1+r-1)/r;
	ans += (dis2+r-1)/r;

	cout << ans;
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

