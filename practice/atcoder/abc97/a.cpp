#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool ok = ((abs(a - c) <= d) || (abs(a - b) <= d && abs(b - c) <= d));
	cout << (ok ? "Yes" : "No");
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

