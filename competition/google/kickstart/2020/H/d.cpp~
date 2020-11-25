#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MAX = (int)1e9+7;

bool ok(string a, string b) {
	int len1 = a.length();
	for (int i = 0; i < len1; i++) {
		if (b.find(a[i]) != string::npos) return true;
	}
	return false;
}

void solve() {
	int n, q; cin >> n >> q;
	vector<string> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	
	int d[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			d[i][j] = MAX;
		}
	}
	for (int i = 0; i < n; i++) {
		d[i][i] = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (ok(v[i],v[j])) {
				d[i][j] = 1;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				d[j][k] = min(d[j][k], d[j][i]+d[i][k]);
			}
		}
	}
	
	/*
	for (auto& x : d) {
		for (int& xd : x) {
			cout << xd << " ";
		}
		cout << "\n";
	}
	*/

	while(q--) {
		int a, b; cin >> a >> b;
		if (d[a-1][b-1] >= MAX || d[a-1][b-1] < 1) {
			cout << -1 << " ";
		} else {
			cout << d[a-1][b-1]+1 << " ";
		}
	}
	cout << "\n";
}

signed main() {
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

