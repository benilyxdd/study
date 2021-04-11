#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int r, x, y;
	cin >> r >> x >> y;

	int dis = x * x + y * y;
	double sqdis = sqrt(dis);
	int up_dis = ceil(sqdis);
	cout << (up_dis + r - 1) / r;
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

