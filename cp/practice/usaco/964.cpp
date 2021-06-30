#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	for (int i = 1; i <= n; i++) {
		bool ok = true;
		for (int j = 0; j + i <= n; j++) {
			for (int k = 0; k < j; k++) {
				if (s.substr(j, i) == s.substr(k, i)) {
					ok = false;
				}
			}
		}
		if (ok) {
			cout << i << '\n';
			return;
		}
	}
}

int main() {
	freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);
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

