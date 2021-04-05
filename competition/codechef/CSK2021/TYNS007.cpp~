#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	//a > b
	//c = a % b
	//d = sumofall(c)
	//!prime(d) = ok
	int n = 4;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	int all = 0;
	for (int i = 0; i < n; i++) {
		all += a[i] % b[i];
	}
	
	bool prime = 1;
	for (int i = 2; i * i <= all; i++) {
		if (all % i == 0) {
			prime = 0;
			break;
		}
	}

	cout << (prime ? "Access Denied" : "Access Granted") << '\n';
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

