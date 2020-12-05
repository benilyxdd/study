#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll a, b, c;
	cin >> a >> b;
	ll day = 0;
	ll remain = 0;
	for (ll i = 0 ; i < a; i++) {
		day++;
		cin >> c;
		remain += c;
		if (remain < b) {
			string s; getline(cin, s);
			cout << day << "\n";
			return;
		}
		remain -= b;
	}
	if (remain != 0) {
		day += remain/b+1;
	}
	cout << day << "\n";
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


