#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	if (s[a] != '-') {
		cout << "No\n";
	} else {
		for (int i = 0; i < s.length(); i++) {
			if (!isdigit(s[i]) && i != a) {
				cout << "No\n";
				return;
			}
		}
		cout << "Yes\n";
	}
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

