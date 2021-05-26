#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int x = n * n;
	if (x % 2 == 0) {
		cout << x / 2 << "\n";
	} else {
		cout << x / 2 + 1 << "\n";
	}
	string e, o;
	for (int i = 0; i < n; i++) {
		if (i % 2) {
			o+='.';
		} else {
			o+='C';
		}
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			e+='.';
		} else {
			e+='C';
		}
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cout << o << "\n";
		} else {
			cout << e << "\n";
		}
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
