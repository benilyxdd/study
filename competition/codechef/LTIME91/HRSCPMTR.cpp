#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 501;
int ar[mxN][mxN];
int n, m, q;
int x, y, v;

bool de() {
	for (int i = n-1; i >= -m-1; i--) {
		set<int> s;
		for (int j = max(i, 0); j < min(n, i+m); j++) {
			s.insert(ar[j][j-i]);
		}
		if (s.size() > 1)
			return false;
	}
	return true;
}

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];
	
	bool ok = de();
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> x >> y >> v;
		if (x != y) {
			cout << (ok ? "Yes\n" : "No\n");
		} else {
			ar[x-1][y-1] = v;
			ok = de();
			cout << (ok ? "Yes\n" : "No\n");
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

