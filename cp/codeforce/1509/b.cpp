#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	int cntm = 0, cntt = 0;
	for (char& x : s) {
		if (x == 'M') {
			cntm++;
		} else {
			cntt++;
		}
	}
	if (cntt != cntm * 2) {
		cout << "NO\n";
		return;
	}
	bool ok = true;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'T') {
			cnt++;
		} else if (s[i] == 'M') {
			if (cnt > 0) {
				cnt--;
			} else {
				cout << "NO\n";
				return;
			}
		}
	}
	if (cnt != cntm) {
		ok = false;
	}

	cnt = 0;
	reverse(s.begin(), s.end());
	for (int i = 0; i < n; i++) {
		if (s[i] == 'T') {
			cnt++;
		} else if (s[i] == 'M') {
			if (cnt > 0) {
				cnt--;
			} else {
				cout << "NO\n";
				return;
			}
		}
	}
	if (cnt != cntm) {
		ok = false;
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

