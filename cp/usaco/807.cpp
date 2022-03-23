#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	int f = abs(a - b);
	int s = min(abs(a - x) + abs(b - y), abs(a - y) + abs(b - x));
	cout << min(f, s) << '\n';
}

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);
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

