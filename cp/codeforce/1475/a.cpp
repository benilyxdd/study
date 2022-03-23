#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	for (ll i = 1; i*i <= n; i++) {
		if (n%i == 0) {
			if ((i%2 == 1 && i != 1) || (n/i)%2 == 1) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}

int main() {
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

