#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	int ans = 2;
	for (int i = 1; i < n; i++) {
		int diff = ar[i]-ar[i-1], temp = 1;
		while(i < n && ar[i]-ar[i-1] == diff) {
			i++, temp++;
		}
		i--;
		ans = max(ans, temp);
	}
	cout << ans << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
