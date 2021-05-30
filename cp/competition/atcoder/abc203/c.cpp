#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, k;
	cin >> n >> k;
	vector<array<int, 2>> ar(n);
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1];
		m[ar[i][0]] += ar[i][1];
	}
	int ans = 0;
	for (pair<const int, int> &p : m) {
		int x = p.first - ans;
		if (x > k) {
			break;
		} else {
			ans += x;
			k -= x;
			k += p.second;
		}
	}
	ans += k;
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

