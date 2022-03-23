#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	if (x > y) {
		swap(x, y);
		swap(a, b);
	}
	bool good = (c * 2) < a + b;

	ll res = 0;
	if (good) {
		res += x * c * 2;
		res += (y - x) * b;
	} else {
		res += x * a;
		res += y * b;
	}
	cout << min(res, (ll)y * c * 2);
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

