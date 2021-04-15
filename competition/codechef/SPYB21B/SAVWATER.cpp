#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int h, x, y, c;
	cin >> h >> x >> y >> c;
	
	int total = h * (x + y / 2);
	cout << (total > c ? "NO" : "YES") << '\n';
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

