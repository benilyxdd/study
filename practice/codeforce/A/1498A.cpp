#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int f(int n) {
	int x = n, sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	int gcd = __gcd(sum, n);
	return gcd;
}

void solve() {
	int n;
	cin >> n;

	if (f(n) != 1) {
		cout << n << '\n';
	} else if (f(n+1) != 1) {
		cout << n + 1 << '\n';
	} else {
		cout << n + 2 << '\n';
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


