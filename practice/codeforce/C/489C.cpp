#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b; cin >> a >> b;
	if (a == 1 && b == 0) {
		cout << "0 0\n";
		return;
	} else if (a > 1 && b == 0 || a*9 < b) {
		cout << "-1 -1\n";
		return;
	}
	int xd[a];
	string s;
	for (int i = 0; i < a; i++) {
		xd[i] = min(9, b);
		b -= xd[i];
	}
	int xdd[a];
	memcpy(xdd, xd, sizeof(xd));
	reverse(xdd, xdd+a);
	if (xdd[0] == 0) {
		for (int i = 1; i < a; i++) {
			if (xdd[i] != 0) {
				xdd[i]--;
				xdd[0]++;
				break;
			}
		}
	}
	for (int& x : xdd) {
		cout << x;
	}
	cout << " ";
	for (int& x : xd) {
		cout << x;
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

