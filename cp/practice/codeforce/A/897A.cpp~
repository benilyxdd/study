#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	for (int i = 0; i < b; i++) {
		int x, y;
		char c, d;
		cin >> x >> y >> c >> d;
		for (int j = x-1; j < y; j++) {
			if (s[j] == c) {
				s[j] = d;
			}
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
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
