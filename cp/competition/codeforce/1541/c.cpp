#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	set<int> test(ar.begin(), ar.end());
	int big = ar.back();

	int ans = 0;
	for (const int &te : test) {
		if (te == 0) {
			continue;
		}
		int temp = 0;
		for (int i = 0; i < n; i++) {
			if (ar[i] != te && ar[i] != 0) {
				temp += ar[i];
			}
		}
		ans = max(ans, temp);
	}
	cout << -ans << '\n';
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

