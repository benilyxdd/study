#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int xd[n][n];
	for (int i = 0 ; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> xd[i][j];
		}
	}

	int sum = 0, rc = 0, cc = 0;
	for (int i = 0; i < n; i++) {
		sum += xd[i][i];
		set<int> a, b;
		for (int j = 0; j < n; j++) {
			a.insert(xd[i][j]);
		}
		for (int j = 0; j < n; j++) {
			b.insert(xd[j][i]);
		}
		cc += (a.size() != n ? 1 : 0);
		rc += (b.size() != n ? 1 : 0);
	}
	for (int i = 0; i < n ; i++) {

	}
	cout << sum << " " << cc << " " << rc << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

