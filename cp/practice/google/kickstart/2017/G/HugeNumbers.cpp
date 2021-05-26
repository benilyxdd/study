#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll powmod(int a, int b, int c) {
	ll ans = a%c;
	for (int i = 2; i <= b; i++) {
		ans = powmod(ans, i, c);
	}
	return ans;
}

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << powmod(a, b, c) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
