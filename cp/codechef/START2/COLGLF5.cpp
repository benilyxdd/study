#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> f(n), c(m);
	for (int& x : f) {
		cin >> x;
	}
	for (int& x : c) {
		cin >> x;
	}
	vector<array<int, 2>> v;
	for (int i = 0; i < n; i++) {
		v.push_back({f[i], 0});
	}
	for (int i = 0; i < m; i++) {
		v.push_back({c[i], 1});
	}
	sort(v.begin(), v.end());

	int start = 0;
	int ans = 0;
	for (array<int, 2>& x : v) {
		if (x[1] != start) {
			ans++;
		}
		start = x[1];
	}
	cout << ans << '\n';
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

