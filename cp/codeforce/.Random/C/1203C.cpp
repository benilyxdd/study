#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	ll re = __gcd(a[0], a[1]);
	for (int i = 2; i < n; i++) {
		re = __gcd(re, a[i]);
		if (re == 1) break;
	}
	
	if (n == 1) re = a[0];
	int cnt = 0;
   	for (int i = 1; i <= sqrt(re); i++) {
		if (re%i == 0) {
			cnt++;
			if (re/i != i) cnt++;
		}
	}
	cout << cnt << "\n";
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

