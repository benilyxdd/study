#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b){
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a%b);
	}
}

ll lcm(ll a, ll b) {
	ll qwer = gcd(a, b);
	return a/qwer*b;
}

void solve() {
	int n;
	cin >> n;
	ll ans = 1LL;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		ans = lcm(ans, a);
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

