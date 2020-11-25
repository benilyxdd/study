#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (i != n-1) {
			if (abs(a[i] - a[i+1]) != 1) {
				cnt++;
			}
		} else {
			if (abs(a[i] - a[0]) != 1) {
				cnt++;
			}
		}
	}
	cout << (cnt >= 2 ? "NO" : "YES") << "\n";
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


