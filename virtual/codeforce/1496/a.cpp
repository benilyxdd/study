#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;

	if (n % 2 == 0 && k != 0) {
		cout << "NO\n";
		return;
	}

	if (k == 0) {
		cout << "YES\n";
	} else {
		bool ok = true;
		for (int i = 0; i < n / 2; i++) {
			if (s[i] != s[n-i-1]) {
				ok = false;
			}
		}
		if (!ok) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
}

int main() {
	ios::sync_with_stdio(1);
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

