#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			x++;
		} else {
			y++;
		}
	}
	if (x != y) {
		cout << 1 << "\n";
		cout << s << "\n";
	} else {
		cout << 2 << "\n";
		cout << s.substr(0, n-1) << " " << s.back() << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
