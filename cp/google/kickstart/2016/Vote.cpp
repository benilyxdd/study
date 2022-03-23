#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fact(ll n) {
	ll a = 1;
	for (int i = 2; i <= n; i++) {
		a *= i;
	}
	return a;
}

void solve() {
   	ll a, b;
	cin >> a >> b;
	ll all = fact(a+b);
	ll xd = fact(a+1)*fact(b);
	cout << fixed << setprecision(15) << (double)(1-xd)/all << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
