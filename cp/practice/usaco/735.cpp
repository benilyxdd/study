#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int x, y;
	cin >> x >> y;

	int dis = 0, walk = 1, now = x;
	for (int i = 0; i < 100; i++, walk *= 2) {
		int target = (i & 1 ? -1 : 1) * (walk) + x;
		dis += abs(target - now);
		if (now < y && target >= y || now > y && target <= y) {
			dis -= abs(target - y);
			break;
		}
		now = target;
	}
	cout << dis << '\n';
}

int main() {
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
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

