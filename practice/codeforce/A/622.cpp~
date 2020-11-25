#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	for (int i = 2; i < n; i++) {
		ll xd = (1+i)*i/2;
		if (xd > n) {
			cout << i-(xd-n) << "\n";
			return;
		} else if (xd == n) {
			cout << i << "\n";
			return;
		}
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


