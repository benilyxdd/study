#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	int d[n][n];
	memset(d, 0, sizeof(d));
	for (int i = 0; i < n; i++) {
		d[i][i] = 1;
	}
	for (int i = n-1, j = 0; i >= 0; i--, j++) {
		d[j][i] = 1;
	}
	if (n&1) {
		int x = n/2;
		d[x-1][x] = 1;
		d[x+1][x] = 1;
		d[x][x-1] = 1;
		d[x][x+1] = 1;
	}
	for (auto& x : d) {
		for (int& y : x) {
			cout << y << " ";
		}
		cout << "\n";
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

