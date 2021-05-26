#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1000001;
ll ar[mxN];

ll d(ll a) {
	if (ar[a] != -1) 
		return ar[a];
	
	ll cnt = 0;
	for (ll i = 1; i*i <= a; i++) {
		if (a%i == 0) {
			cnt+=2;
			if (i == a/i) {
				cnt--;
			}
		}
	}

	return ar[a] = cnt;	
}

void solve() {
	memset(ar, -1, sizeof(ar));
	int a, b, c;
	cin >> a >> b >> c;
	ll ans = 0;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				ans += d(i*j*k);
				ans %= 1073741824LL;
			}
		}
	}
	cout << ans;
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

