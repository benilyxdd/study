#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k, ans = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
			cin >> a[i];
	for (int i = 0; i < (1<<n); i++) {
		ll x = 0;
		for (int j = 0; j < n; j++) {
			if (i&(1<<j)) {
				x+=a[j];
			}
		}
		if (x == k) {
			ans++;
		}
	}
	cout << ans << "\n";
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

