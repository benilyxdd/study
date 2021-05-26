#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	if (n == 2) {
		cout << -1 << '\n';
		return;
	}
	int j = 1;
	for (int i = 1; i <= n * n; i += 2, j++) {
		cout << i << ' ';
		if (j == n) {
			cout << '\n';
			j = 0;
		}
	}
	for (int i = 2; i <= n * n; i += 2, j++) {
		cout << i << ' ';
		if (j == n) {
			cout << '\n';
			j = 0;
		}
	}
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

