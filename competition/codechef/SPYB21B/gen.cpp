#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n = 100000;
	cout << n << '\n';
	for (int i = 0; i < n; i++) {
		cout << 1 << ' ';
	}
	cout << '\n';
	cout << n << '\n';
	for (int i = 0; i < n; i++) {
		cout << 1 << ' ' << (int)1e9 << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("input_c.txt", "w", stdout);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

