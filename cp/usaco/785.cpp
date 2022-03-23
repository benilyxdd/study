#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	vector<int> ar_copy(ar.begin(), ar.end());
	sort(ar.begin(), ar.end());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (ar[i] != ar_copy[i]) {
			ans++;
		}
	}
	cout << ans - 1 << '\n';
}

int main() {
	freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
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

