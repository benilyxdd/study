#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxM = (int)2e5+5;
ll pre[mxM];
ll a[mxM], b[mxM];

void solve() {
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] = abs(a[i]);
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		b[i] = abs(b[i]);
	}
	for (int i = 0; i < n-1; i++) {
		pre[i] = abs(a[i]-a[i+1]);
	}
	
	ll mn = pre[0];
	for (int i = 0; i < n; i++) {
		mn = __gcd(mn, pre[i]);
	}
	ll mn2 = *min_element(a, a+n);
	for (int i = 0; i < m; i++) {
		if (mn%(b[i]+mn2) == 0) {
			cout << (b[i]+mn2) << " ";
		} else {
			cout << __gcd(b[i]+mn2, mn) << " ";
		}
	}
}

signed main() {
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

