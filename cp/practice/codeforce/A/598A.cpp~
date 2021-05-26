#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll a;
	cin >> a;
	ll ans = (1+a)*a/2;
	for (int i = 0; i < a; i++) {
		int n = pow(2, i);
		if (n <= a) {
			ans -= n*2;
		} else {
			break;
		}
	}
	cout << ans << "\n";
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


