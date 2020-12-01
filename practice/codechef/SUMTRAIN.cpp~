#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int mx = 0;
		for (int j = -1; j < i; j++) {
			cin >> a;
			mx = max(a, mx);
		}
		ans += mx;
	}
	cout << ans-1 << "\n";
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

