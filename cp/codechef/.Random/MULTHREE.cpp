#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll k;
	int d0, d1;
	cin >> k >> d0 >> d1;

	int s = d0+d1;
	int c = ((2*s)%10) + ((4*s)%10) + ((6*s)%10) + ((8*s)%10);

	ll cycle = (k-3)/4;
	ll ans = 0;

	if (k == 2) {
		ans = s;
	} else {
		ans = s + (s%10) + cycle*c*1LL;
		int left = k-3-cycle*4;
		int p = 2;
		for (int i = 0; i < left; i++) {
			ans += (p*s)%10;
			p = (p*2)%10;
		}
	}
	cout << (ans % 3 == 0 ? "YES" : "NO") << "\n";
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

