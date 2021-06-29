#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(2 * n);
	for (int &x : ar) {
		cin >> x;
	}

	sort(ar.begin(), ar.end());

	int mn = 1e6;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = i + 1; j < 2 * n; j++) {
			int cnt = 0, f, s;
			for (int k = 0, p = 0; k < 2 * n; k++) {
				if (i == k || j == k) {
					continue;
				}
				if (p & 1) {
					s = ar[k];
					cnt += abs(f - s);
				} else {
					f = ar[k];
				}
				p++;
			}
			mn = min(mn, cnt);
		}
	}
	cout << mn << '\n';
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

