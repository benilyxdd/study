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

	int cnt = 0;
	int mn = ar[0];
	int mx = max(1LL ,ar[0] * 2 - 2);
	for (int i = 1; i < n; i++) {
		int a = (ar[i] + mn - 1LL) / mn;
		int b = (ar[i] + mx - 1LL) / mx;
		cnt += min(a, b) - 1LL;
	}

	cout << cnt << '\n';
}

signed main() {
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

