#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n, k, s; cin >> n >> k >> s;
	cout << min(n+k, k+k-s+n-s) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}