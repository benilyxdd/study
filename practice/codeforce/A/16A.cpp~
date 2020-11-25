#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	char x = '-';
	for (int i = 0; i < a; i++) {
		set<char> s;
		for (int j = 0; j < b; j++) {
			char c;
			cin >> c;
			if (c == x) {
				cout << "NO\n";
				return;
			}
			s.insert(c);
		}
		if (s.size() != 1) {
			cout << "NO\n";
			return;
		}
		x = *s.begin();
	}
	cout << "YES\n";
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
