#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int k, n;
	cin >> k >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 1; j <= ar[i]; j++) {
			cnt += j;
			if (cnt >= k) {
				cout << j << '\n';
				return;
			}
		}

		int last = -1, last_time = -1;
		for (int j = ar[i] + 1;; j++) {
			ll total = 0;
			total += (ll)(1 + j) * j / 2;
			total += (ll)(ar[i] + j) * (j - ar[i]) / 2;
			if (total > k) {
				cout << last_time << '\n';
				return;
			} else {
				last = total;
				last_time = j + j - ar[i];
			}
		}
	}
}

int main() {
	// freopen("race.in", "r", stdin);
	// freopen("race.out", "w", stdout);
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

