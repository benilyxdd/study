#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int w, h, n;
	cin >> w >> h >> n;
	int as = 1, bs = 1;
	while(w%2 == 0) {
		as*=2;
		w/=2;
	}
	while(h%2 == 0) {
		bs*=2;
		h/=2;
	}
	ll yo = (ll)as*bs;
	if (yo >= n) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
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

