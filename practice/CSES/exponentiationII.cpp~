#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

ll f(ll a, ll b, ll m) {
	ll r = 1;
	while(b) {
		if (b&1) 
			r = r*a%m;
		a=a*a%m;
		b/=2;
	}
	return r;
}

void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << f(a, f(b, c, MOD-1), MOD) << "\n";
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


