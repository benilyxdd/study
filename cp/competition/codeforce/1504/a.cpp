#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	
	bool ok = 0;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		int res = n-i-1;
		if (s[res] != 'a') {
			s.insert(i, "a");
			ok = 1;
			break;
		}
	}
	if (ok) {
		cout << "YES\n";
		cout << s << '\n';
	} else {
		cout << "NO\n";
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

