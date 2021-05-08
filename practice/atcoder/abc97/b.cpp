#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<bool> ok(n + 1, false);
	ok[1] = 1;
	for (int i = 2; i * i <= n; i++) {
		int x = i * i;
		while (x <= n) {
			ok[x] = true;
			x *= i;
		}
	}
	for (int i = n; i >= 1; i--) {
		if (ok[i]) {
			cout << i;
			return;
		}
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

