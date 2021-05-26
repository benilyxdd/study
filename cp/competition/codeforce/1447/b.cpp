#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int d, n, m; cin >> n >> m;
	int cnt = 0;
	int sum = 0;
	int smallest = 101;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> d;
			if (d < 0) {
				cnt++;
			}
			sum+=abs(d);
			smallest = min(smallest, abs(d));
		}
	}

	if (cnt&1) {
		cout << sum - 2*smallest << "\n";
	} else {
		cout << sum << "\n";
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

