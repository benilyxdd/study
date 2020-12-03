#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
int n, a, b, c;

void solve() {
	cin >> n >> a >> b >> c;
	n = n%4;
	if (n == 1) {
		int x = 3*a;
		int y = c;
		int z = a+b;
		cout << min({x, y, z});
	} else if (n == 2) {
		int x = 2*a;
		int y = b;
		int z = 2*c;
		cout << min({x, y, z});
	} else if (n == 3) {
		int x = a;
		int y = 3*c;
		int z = b+c;
		cout << min({x, y, z});
	} else {
		cout << n;
	}
}

signed main() {
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


