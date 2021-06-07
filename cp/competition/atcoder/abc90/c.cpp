#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n, m;
	cin >> n >> m;
	if (n > m) {
		swap(n, m);
	}
	if (n == 1 && m == 1) {
		cout << 1;
	} else if (n == 1) {
		cout << m - 2;
	} else {
		cout << (ll)(n - 2) * (m - 2);
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

