#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+5;
int n, k;
array<int, 2> ar[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1];
	sort(ar, ar+n);

	int last_harvest_time = 0, res = 0;
	for (int i = 0; i < n; i++) {
		if (last_harvest_time >= ar[i][1]) {
			continue;
		} else {
			if (last_harvest_time <= ar[i][0]) {
				int t = ar[i][1]-ar[i][0];
				int robot_need = (t+k-1)/k;
				res += robot_need;
				last_harvest_time = ar[i][0]+robot_need*k;
			} else {
				int t = ar[i][1]-last_harvest_time;
				int robot_need = (t+k-1)/k;
				res += robot_need;
				last_harvest_time += robot_need*k;
			}
		}
	}
	cout << res << "\n";
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

