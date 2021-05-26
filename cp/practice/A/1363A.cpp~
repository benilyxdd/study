#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n, x; cin >> n >> x;
	int odd = 0, even = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a&1) odd++;
		else even++;
	}
	
	bool xd = false;
	for (int i = 1; i <= min(odd, x); i+=2) {
		if (odd-i <= n-x) {
			xd = true;
			break;
		}
	}
	cout << (xd ? "Yes" : "No") << "\n";
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
