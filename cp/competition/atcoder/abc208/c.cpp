#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n, k;
	cin >> n >> k;
	vector<array<ll, 2>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0];
		ar[i][1] = i;
	}
	sort(ar.begin(), ar.end());

	ll each = k / n;
	ll left = k % n;
	vector<ll> ans(n, each);
	for (int i = 0; i < left; i++) {
		ans[ar[i][1]]++;
	}
	for (ll &x : ans) {
		cout << x << '\n';
	}
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

