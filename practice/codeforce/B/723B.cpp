#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool is(char a) {
	return (a > 64 && a < 91 || a > 96 && a < 123);
}

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int mx = 0, temp = 0, cnt = 0;
	bool ok = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') {
			ok = true, temp = 0;
			continue;
		}
		if (s[i] == ')') {
			ok = false, temp = 0;
			continue;
		}
		if (s[i] == '_') {
			temp = 0;
			continue;
		}
		
		while(is(s[i])) {
			i++, temp++;
		}
		cout << i << "\n";
		cout << "temp; " << temp << "\n";
	}
	cout << mx << " " << cnt;
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

