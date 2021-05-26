#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string ar[9];
	for (int i = 0; i < 9; i++) {
		cin >> ar[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (ar[i][j] == '1') {
				ar[i][j] = '2';
			}
		}
	}

	for (string& x : ar) {
		cout << x << '\n';
	}
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


