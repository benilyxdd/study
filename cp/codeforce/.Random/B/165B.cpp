#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, k;

ll cal(ll v) {
	ll t = 1, total = 0;
	while(v/t) {
		total += v/t;
		t *= k;
	}
	return total;
}

void solve() {
	cin >> n >> k;
	int l = 0, r = n+1;
	while(1) {
		int ce = (l+r)/2;
		ll a = cal(ce), b = cal(ce+1);
		if (a < n && b >= n) {
			cout << ce+1;
			return;
		} else if (a >= n && b >= n) {
			r = ce-1;
		} else if (a <= n && b <= n) {
			l = ce+1;
		}
	}
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

