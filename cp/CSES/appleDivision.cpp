#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[20];

void solve() {
	ll sum = 0, ans = 0; cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i], sum += a[i];
	for (int i = 0; i < (1<<n); i++) {
		ll cs = 0;
		for (int j = 0; j < n; j++) {
			if (i>>j&1) {
				cs += a[j];
			}
		}
		if (cs <= sum/2) {
			ans = max(ans, cs);
		}
	}
	cout << sum-2*ans << "\n";
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

