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

	ll ans = 0, cur = 0;
	set<ll> s = {0};
	for (int i = 0; i < n; i++) {
		cur += (ll)ar[i];
		if (s.find(cur) != s.end()) {
			ans++;
			s.clear();
			s.insert(0);
			cur = ar[i];
		}
		s.insert(cur);
	}

	cout << ans << '\n';
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

