#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int len = s.length();
	int l, r;
	for (int i = 0; i < len; i++) {
		if (s[i] == '(')
			l = i;
		if (s[i] == ')')
			r = i;
	}

	if (r < l) {
		if (r < 1 || len-l-1 < 1) {
			cout << "NO\n";
		} else {
			int x = (r-1)%2 + (len-l-2)%2 + (l-r-1)%2;
			if (x&1) {
				cout << "NO\n";
			} else {
				cout << "YES\n";
			}
		}
	} else {
		int x = (l%2) + (len-r-1)%2 + (r-l-1)%2;
		if (x&1) {
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

