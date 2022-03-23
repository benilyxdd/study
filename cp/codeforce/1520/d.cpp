#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[ar[i] - i]++;
	}

	ll cnt = 0;
	for (pair<const int, int>& p : mp) {
		cnt += (ll)(p.second * (p.second - 1) / 2);
	}
	cout << cnt << '\n';
}

signed main() {
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

