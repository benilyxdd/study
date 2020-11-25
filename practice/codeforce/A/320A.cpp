#include <bits/stdc++.h>

using namespace std;

void solve() {
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != '1' && a[i] != '4') {
			cout << "NO\n";
			return;
		}
		if (a[0] != '1') {
			cout << "NO\n";
			return;
		}
		if (a.find("444") != string::npos) {
			cout << "NO\n";
			return;
		}
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
