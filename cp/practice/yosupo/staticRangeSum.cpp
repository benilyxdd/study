#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q;
	cin >> n >> q;
	vector<ll> ar(n);
	for (ll &x : ar) {
		cin >> x;
	}
	vector<ll> prefix(n + 1, 0);
	partial_sum(ar.begin(), ar.end(), ++prefix.begin());

	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		cout << prefix[b] - prefix[a] << '\n';
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

