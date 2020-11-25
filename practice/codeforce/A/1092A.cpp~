#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	string model;
	for (int i = 0; i < b; i++) {
		model += char(97+i);
	}
	string s;
	for (int i = b; i < a; i+=b) {
		s+=model;
	}
	int x = a - s.length();
	for (int i = 0; i < x; i++) {
		s += model[i];
	}
	cout << s << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
