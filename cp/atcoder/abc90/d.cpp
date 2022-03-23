#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	ll ans = 0;
	for (int i = k + 1; i <= n; i++) {
		int x = n / i;
		ans += x * (i - k);

		int y = (x + 1) * i;
		ans += max(0, i - (y - n - 1) - k);
	}
	if (k == 0) {
		ans -= n;
	}
	cout << ans;
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

