#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	int lock = -1;
	for (int i = 1; i < n; i++) {
		if (ar[i] == ar[i-1]) {
			lock = ar[i];
		}
	}
	if (ar[0] == ar.back()) {
		lock = ar[0];
	}
	for (int i = 0; i < n; i++) {
		if (ar[i] != lock) {
			cout << i + 1 << '\n';
			return;
		}
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

