#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n + 2);
	for (int& x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());

	ll sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum += ar[i];
	}

	for (int i = 0; i < n + 1; i++) {
		if (sum - ar[i] == ar.back()) {
			for (int j = 0; j < n + 1; j++) {
				if (j != i) {
					cout << ar[j] << ' ';
				}
			}
			cout << '\n';
			return;
		}
	}

	sum += ar[n + 1];
	int tar = ar[n];
	sum -= tar;
	for (int i = 0; i < n + 2; i++) {
		if (i != n) {
			if (sum - ar[i] == tar) {
				for (int j = 0; j < n + 2; j++) {
					if (j == n || j == i) {
						continue;
					}
					cout << ar[j] << ' ';
				}
				cout << '\n';
				return;
			}
		}
	}
	cout << -1 << '\n';
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

