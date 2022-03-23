#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n), ar2(n);
	for (int& x : ar) {
		cin >> x;
	}
	for (int& x : ar2) {
		cin >> x;
	}

	vector<array<int, 2>> diff(n);
	for (int i = 0; i < n; i++) {
		diff[i] = {abs(ar[i] - ar2[i]), i};
	}

	auto cmp = [](const array<int, 2> &a, const array<int, 2> &b) {
		return a[0] > b[0];
	};
	sort(diff.begin(), diff.end(), cmp);
	swap(ar[diff[0][1]], ar[diff[1][1]]);

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += abs(ar[i] - ar2[i]);
	}
	cout << ans << '\n';
}

signed main() {
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

