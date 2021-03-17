#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	assert(k == 3);

	if (n&1) {
		cout << n/2 << ' ' << n/2 << ' ' << 1 << '\n';
	} else {
		if (n%4 == 0) {
			cout << n/2 << ' ' << n/4 << ' ' << n/4 << '\n';
		} else {
			cout << 2 << ' ' << (n-2)/2 << ' ' << (n-2)/2 << '\n';
		}
	}
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

