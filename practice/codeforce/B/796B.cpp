#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e6+5;
bool hole[mxN];
int n, m, k;

void solve() {
	int where = 1;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		hole[x] = 1;
	}

	int ans = -1;
	if (hole[1]) {
		ans = 1;
	}
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		if (x == where) {
			where = y;
			if (hole[y] && ans == -1) {
				ans = y;
			}
		} else if (y == where) {
			where = x;
			if (hole[x] && ans == -1) {
				ans = x;
			}
		}
	}
	if (ans == -1) {
		cout << where << "\n";
	} else {
		cout << ans << "\n";
	}
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

