#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int k, n;
	cin >> k >> n;
	vector<vector<int>> sessions(k, vector<int>(n));
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cin >> sessions[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			bool ok = true, ok2 = true;
			for (vector<int> &session : sessions) {
				int y, z;
				for (int p = 0; p < n; p++) {
					if (session[p] == i + 1) {
						y = p;
					}
					if (session[p] == j + 1) {
						z = p;
					}
				}
				if (y > z) {
					ok = false;
				}
				if (z > y) {
					ok2 = false;
				}
			}
			ans += ok + ok2;
		}
	}
	cout << ans << '\n';
}

int main() {
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
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

