#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<ll> ar(n);
	for (ll &x : ar) {
		cin >> x;
		x %= 7;
	}
	vector<ll> prefix(n + 1, 0);
	partial_sum(ar.begin(), ar.end(), ++prefix.begin());


}

int main() {
	// freopen("div7.in", "r", stdin);
	// freopen("div7.out", "w", stdout);
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

