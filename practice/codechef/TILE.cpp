#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1000000007;
const ll MAX = (int)1e12+12;
ll b[2][2] = {{1, 1}, {1, 0}};

ll f(ll c) {
	ll a[2][2] = {{1, 1}, {1, 0}};
	if (c == 0)
		return 0;
	
	for (ll i = 1; i < c; i++) {
		ll x = a[0][0]*b[0][0] + a[0][1]*b[1][0];
		ll y = a[0][0]*b[0][1] + a[0][1]*b[1][1]; 
 		ll z = a[1][0]*b[0][0] + a[1][1]*b[1][0]; 
  		ll w = a[1][0]*b[0][1] + a[1][1]*b[1][1]; 
  
 		a[0][0] = x; 
 		a[0][1] = y; 
 		a[1][0] = z; 
  		a[1][1] = w;
	}

	return a[0][0];
}

void solve() {
	ll x;
	cin >> x;
	cout << f(x) << "\n";
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

