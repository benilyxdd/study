#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll a, ll b) {
	return a*b/__gcd(a,b);
}

void solve() {
	ll n; cin >> n;
	ll ans;
	for (ll i = 1; i*i <= n; i++) {
		if (n%i == 0 && lcm(n/i, i) == n) {
			ans = i;				
		}
	}
	cout << ans << " " << n/ans << "\n";
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

