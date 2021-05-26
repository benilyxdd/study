#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, x; cin >> n >> x;
	int a[n];
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i]%x == 0) {
			cnt++;
		}
		sum += a[i];
	}
	if (cnt == n) {
		cout << -1 << "\n";
	} else if (sum%x != 0) {
		cout << n << "\n";
	} else {
		int l, r;
		for (int i = 0; i < n; i++) {
			if (a[i]%x != 0) {
				l = i;
				break;
			}
		}
		for (int i = n-1; i >= 0; i--) {
			if (a[i]%x != 0) {
				r = i;
				break;
			}
		}
		cout << max(n-l-1, r) << "\n";
	}
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


