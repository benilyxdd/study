#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll s, p;
	cin >> s >> p;
	for (ll i = 1; i*i <= p; i++) {
		if(p%i == 0) {
			ll x = i;
			ll y = p/i;
			if (x+y == s) {
				cout << "Yes\n";
				return;
			}
		}
	}
	cout << "No\n";
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

