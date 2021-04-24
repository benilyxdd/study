#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q;
	string s;
	cin >> n >> s >> q;
	string f = s.substr(0, n);
	string l = s.substr(n);
	// cout << f << ' ' << l << '\n';
	for (int i = 0; i < q; i++) {
		int t, a, b;
		cin >> t >> a >> b;
		a--, b--;
		if (t == 1) {
			int d[4] = {a / n, b / n, a % n, b % n};
			if (d[0] == 1 && d[1] == 1) {
				swap(l[d[2]], l[d[3]]);
			} else if (d[0] == 1 && d[1] == 0) {
				swap(l[d[2]], f[d[3]]);
			} else if (d[0] == 0 && d[1] == 1) {
				swap(f[d[2]], l[d[3]]);
			} else {
				swap(f[d[2]], f[d[3]]);
			}
		} else {
			swap(f, l);
		}
	}
	cout << f + l << '\n';
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

