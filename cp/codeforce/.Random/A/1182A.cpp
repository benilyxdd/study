#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fact(ll x){
	ll ans = 1;
	for (int i = 2; i <= x; i++) {
		ans *= i;
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	if (n%2) {
		cout << 0 << "\n";
	} else {
		ll ans = 1;
		for (int i = 0; i < n/2; i++) {
			ans *= fact(2);
		}
		cout << ans << "\n";
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


