#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	vector<int> diff(n + 1, INT_MAX);
	for (int i = 1; i < n; i++) {
		diff[i - 1] = ar[i] - ar[i - 1];
	}
	// for (int &x : diff) {
	// 	cout << x << ' ';
	// }
	// cout << '\n';

	int mx = 0;
	for (int i = 0; i < n - 1; i++) {
		int now = diff[i], cnt = 2;
		while (i + 1 < n && diff[i + 1] == now) {
			cnt++, i++;
		}
		if (diff[i + 1] + diff[i + 2] != 2 * now) {
			mx = max(cnt + (i + 1 < n - 1), mx);
		} else {
			if (diff[i + 3] != now) {
				mx = max(cnt + 2, mx);
			} else {
				i += 2, cnt += 2;
				while (i + 1 < n && diff[i + 1] == now) {
					cnt++, i++;
				}
				mx = max(cnt, mx);
			}
		}
	}
	cout << mx << '\n';
}

int main() {
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

