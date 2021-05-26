#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	vector<ll> v;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
	}
	if (n == 1) {
		cout << 0 << "\n";
		return;
	}
	set<int> s(v.begin(), v.end());
	if (s.size() == 1) {
		cout << 0 << "\n";
		return;
	}
	sort(v.begin(), v.end());
	ll ans = v.size()-2;
	int i = 1;
	while(v[i] == v[0]) {
		ans--;
		i++;
	}
	int j = n - 2;
	while(v[j] == v.back()) {
		ans--;
		j--;
	}
	cout << ans << "\n";
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


