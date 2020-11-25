#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	if (a == 1 && b > 0) {
		cout << 0 << "\n";
		return;
	}
	for (int i = 0; i < s.length(); i++) {
		if (i == 0 && s[0] != '1' && b > 0) {
			s[i] = '1';
			b--;
		} else if (s[i] != '0' && b > 0 && i > 0) {
			s[i] = '0';
			b--;
		}
	}
	cout << s << "\n";
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

