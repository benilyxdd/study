#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int mn = 1001, mx = 0;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		mn = min(x, mn);
	}
	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		mx = max(x, mx);
	}

	if (mn >= mx) {
		cout << c << "\n";
	} else {
		int ans = c/mn * (mx-mn);
		cout << c + ans << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
