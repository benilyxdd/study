//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff49/000000000043b0c6

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll cal(ll &x) {
	string x_str = to_string(x);
	int n = x_str.length();
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		ans += pow(5, i);
	}
	return ans;
}

void solve() {
	ll a, b;
	cin >> a >> b;
	a--;
	cout << cal(b) - cal(a) << '\n';
}

signed main() {
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
