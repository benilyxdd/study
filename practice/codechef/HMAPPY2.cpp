#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n, a, b, k; cin >> n >> a >> b >> k;
	ll total = 0;
	total += (n/a)-(n/(a*b/__gcd(a,b)));
	total += (n/b)-(n/(a*b/__gcd(a,b)));
	cout << (total >= k ? "Win" : "Lose") << "\n";
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

