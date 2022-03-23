#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll po(ll a, ll n, ll p) {
	ll ans = 1;
	while(n) {
		if (n&1) {
			ans = (ans*a)%p;
			n--;
		} else {
			a = (a*a)%p;
			n/=2;
		}
	}
	return ans;
}

void solve() {
	int n; cin >> n;
	cout << po(8, n, 10) << "\n";
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


