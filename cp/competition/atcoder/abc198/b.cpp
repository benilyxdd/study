#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;

	int cnt = 0, n = s.length(), i = 0;
	if (s[n-1-i] == '0') {
		while(s[n-1-i] == '0') {
			i++;
			cnt++;
		}
	}

	string a;
	for (int i = 0; i < cnt; i++) {
		a += '0';
	}
	a += s;

	int len = a.length();

	for (int i = 0; i < n; i++) {
		if (a[i] != a[len-i-1]) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}

int main() {
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

