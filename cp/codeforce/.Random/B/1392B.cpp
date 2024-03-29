#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	if (k > 1) {
		k = 2 + k % 2;
	}
	for (int i = 0; i < k; i++) {
		ll mx = *max_element(v.begin(), v.end());
		for (int j = 0; j < n; j++) {
			v[j] = mx - v[j];
		}
	}
	for (auto a : v) {
		cout << a << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
