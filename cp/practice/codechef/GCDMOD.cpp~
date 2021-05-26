#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

ll power(ll a, ll n, ll mod) {
	ll ans = 1;
	while(n) {
		if (n&1) {
			ans = ((ans%mod)*(a%mod))%mod;
			n--;
		} else {
			a = ((a%mod)*(a%mod))%mod;
			n/=2;
		}
	}
	return ans;
}

ll gcd(ll a, ll b, ll n) {
	if (a == b) {
		return (power(a, n, MOD) + power(b, n, MOD))%MOD;
	}

	ll diff = a-b;
	ll largest = 1;
	for (ll i = 1; i*i <= diff; i++) {
		if (diff%i == 0) {
			ll x = (power(a, n, i) + power(b, n, i))%i;
			if (x == 0) largest = max(largest, i);
			
			ll y = (power(a, n, diff/i) + power(b, n, diff/i))%(diff/i);
			if (y == 0) return (diff/i);
		}
	}
	return largest%MOD;
}	

void solve() {
	ll a, b, n; cin >> a >> b >> n;
	cout << gcd(a, b, n) << "\n";	
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

