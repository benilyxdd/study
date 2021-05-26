#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int x, y, k, n, a, b;
	cin >> x >> y >> k >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({a, b});
	}

	for (int i = 0; i < n; i++) {
		if (v[i].first >= (x-y) && v[i].second <= k) {
			cout << "LuckyChef\n";
			return;
		}
	}
	cout << "UnluckyChef\n";
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

