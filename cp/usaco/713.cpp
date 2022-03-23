#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<int, 2>> ar(n);
	for (array<int, 2> &vec : ar) {
		for (int &x : vec) {
			cin >> x;
		}
	}
	sort(ar.begin(), ar.end());

	int ans = ar[0][0] + ar[0][1];
	for (int i = 1; i < n; i++) {
		if (ans > ar[i][0]) {
			ans += ar[i][1];
		} else {
			ans = ar[i][0];
			ans += ar[i][1];
		}
	}
	cout << ans << '\n';
}

int main() {
	freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);
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

