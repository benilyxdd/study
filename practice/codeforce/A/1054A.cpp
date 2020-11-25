#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;
	int diff = abs(a-b);
	int ediff = abs(a-c);
	int t1 = diff*x;
	int t2 = ediff*y + 3*z + diff*y;
	if (t1 >= t2) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
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


