#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == x || b == x || a == 7-x || b == 7-x) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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


