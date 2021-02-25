#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	char ch;
	string a, b, ans;
	cin >> ch >> a >> b;

	if (ch == 'A') {
		for (char& x : a) {
			ans += tolower(x);
		}
		ans += toupper(b[0]);
		for (int i = 1; i < b.length(); i++) {
			ans += tolower(b[i]);
		}
	} else if (ch == 'B') {
		for (char& x : a) {
			ans += tolower(x);
		}
		ans += '_';
		for (char& x : b) {
			ans += x;
		}
	} else if (ch == 'C') {
		for (char& x : a) {
			ans += toupper(x);
		}
		ans += '_';
		for (char& x : b) {
			ans += toupper(x);
		}
	} else if (ch == 'D') {
		ans += toupper(a[0]);
		for (int i = 1; i < a.length(); i++) {
			ans += tolower(a[i]);
		}
		ans += '-';
		ans += toupper(b[0]);
		for (int i = 1; i < b.length(); i++) {
			ans += tolower(b[i]);
		}
	} else if (ch == 'E' || ch == 'F' || ch == 'G' || ch == 'H') {
		for (int i = 0; i < a.length(); i++) {
			if (i&1) {
				ans += toupper(a[i]);
			} else {
				ans += tolower(a[i]);
			}
		}
		ans += '|';
		for (int i = 0; i < b.length(); i++) {
			if (i&1) {
				ans += toupper(b[i]);
			} else {
				ans += tolower(b[i]);
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

