#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll a, ans = 1;
	cin >> a;
	while(a > 0) {
		int temp = a%10;
		if (temp > 5) {
			ans *= 2;
		} else {
			ans *= 3;
		}
		a /= 10;
	}
	cout << ans << '\n';
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

