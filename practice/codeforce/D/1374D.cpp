#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;

	map<int, int> m;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		m[k-ar[i]%k]++;
	}

	int ans = 0;
	int mx = 0, pos = 0;
	for (pair<const int, int>& p : m) {
		if (p.first == k) {
			continue;
		}
		if (p.second > mx) {
			mx = p.second;
			pos = p.first;
		} else if (p.second == mx && p.second > 0) {
			pos = p.first;
		}
	}

	cout << (ll)k * max(0, mx - 1) + (pos == 0 ? 0 : pos + 1) << '\n';
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


