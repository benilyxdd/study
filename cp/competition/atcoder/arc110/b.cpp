#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll xd = 10000000000;

void solve() {
	int n;
	string s;
	cin >> n >> s;

	bool tf = false;
	for (int i = 1; i < n; i++) {
		if (s[i-1] == '1') {
			if (s[i] == '1') {
				if (tf) {
					cout << 0 << "\n";
					return;
				} else {
					tf = true;
				}
			}
		} else {
			tf = false;
			if (s[i] == '0') {
				cout << 0 << "\n";
				return;
			}
		}
	}
	
	if (n == 1) {
		if (s == "1") {
			cout << 2*xd << "\n";
		} else if (s == "0") {
			cout << xd << "\n";
		}
		return;
	} else if (n == 2) {
		if (s == "11") {
			cout << xd << "\n";
		}
		return;
	}

	ll ans = 0;
	for (int i = 0; i < n-2; i++) {
		string a = s.substr(i, 3);
		if (i == 0 || i == n-3) {
			if (a != "110") {
				ans++;
			}
		} else {
			if (a == "110") {
				ans++;
			}
		}
	}
	cout << xd-ans+1 << "\n";
}

signed main() {
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

