#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string a, b;
	for (int i = 0; i < n; i++) {
		char xd;
		cin >> xd; 
		if (xd == '2') {
			a += '1';
			b += '1';
		} else if (xd == '1') {
			a += '1';
			b += '0';
		} else {
			a += '0';
			b += '0';
		}
	}
	cout << a << "\n" << b << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

