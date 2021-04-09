#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;

	int l = -1, r = -1;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*') {
			l = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '*') {
			r = i;
			break;
		}
	}

	if (r == l) {
		cout << 1 << '\n';
		return;
	}

	int ans = 2;
	for (int i = l; i < r; i++) {
		for (int j = min(r - 1, i + k); j > i; j--) {
			if (s[j] == '*') {
				ans++;
				i = j;
				break;
			}
		}
	}
	cout << ans << '\n';
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

