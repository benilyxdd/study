#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	string s;
	cin >> a >> b >> s;

	int n = s.length();
	for (char& x : s) {
		if (x == '1') {
			b--;
		} else if (x == '0') {
			a--;
		}
	}
	if (a < 0 || b < 0) {
		cout << -1 << '\n';
		return;
	}

	for (int i = 0; i < n; i++) {
		if (s[i] != s[n - i - 1] && s[i] != '?' && s[n - i - 1] != '?') {
			cout << -1 << '\n';
			return;
		}
		if (s[i] == '?') {
			if (s[n - i - 1] == '0') {
				if (a > 0){
					s[i] = '0';
					a--;
				} else {
					cout << -1 << '\n';
					return;
				}
			} else if (s[n - i - 1] == '1') {
				if (b > 0) {
					s[i] = '1';
					b--;
				} else {
					cout << -1 << '\n';
					return;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (s[i] == '?' && s[n - i - 1] == '?') {
			if (i != n - i - 1) {
				if (a > 1) {
					s[i] = s[n - i - 1] = '0';
					a -= 2;
				} else if (b > 1) {
					s[i] = s[n - i - 1] = '1';
					b -= 2;
				} else {
					cout << -1 << '\n';
					return;
				}
			} else {
				if (a > 0) {
					s[i] = '0';
					a--;
				} else if (b > 0) {
					s[i] = '1';
				} else {
					cout << -1 << '\n';
					return;
				}
			}
		}
	}
	cout << s << '\n';
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

