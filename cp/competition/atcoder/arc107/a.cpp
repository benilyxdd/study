#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 998244353;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	int ans = 0;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				ans = (ans + i*j*k)%MOD;
			}
		}
	}
	cout << ans << "\n";
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

