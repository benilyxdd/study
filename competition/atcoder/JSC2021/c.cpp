#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok(int i, int a, int b) {
	int t = a / i + (a % i != 0);
	int res = t * i;
	if (res + i <= b) {
		return true;
	}
	return false;
}

void solve() {
	int a, b;
	cin >> a >> b;

	int mx = 0;
	for (int i = 1; i <= b - a + 1; i++) {
		if (ok(i, a, b)) {
			mx = max(mx, i);
		}
	}
	cout << mx << '\n';
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

