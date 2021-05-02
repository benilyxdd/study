#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	if (n & 1) {
		cout << "NO\n";
		return;
	}

	int x = n / 2;
	int y = sqrt(x);

	if (y * y == x) {
		cout << "YES\n";
		return;
	}

	if (n % 4 == 0) {
		int z = n / 4;
		int a = sqrt(z);
		if (a * a == z) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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

