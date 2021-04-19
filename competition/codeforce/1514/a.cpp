#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	bool ok = false;
	for (int& x : ar) {
		cin >> x;
	}

	for (int i = 0; i < n; i++) {
		int sq = sqrt(ar[i]);
		if (sq * sq != ar[i]) {
			ok = true;
			break;
		}
	}
	cout << (ok ? "YES" : "NO") << '\n';
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

