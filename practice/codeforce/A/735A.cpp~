#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	int g = (int)s.find('G');
	int t = (int)s.find('T');
	char temp;
	for (int i = 1; i < a/b+1; i++) {
		if (g < t) {
			temp = s[g+i*b];
			if (temp == '#') {
				cout << "NO\n";
				return;
			}
			if (temp == 'T') {
				cout << "YES\n";
				return;
			}
		} else {
			temp = s[g-i*b];
			if (temp == '#') {
				cout << "NO\n";
				return;
			}
			if (temp == 'T') {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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
