#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string ar[3];
	for (int i = 0; i < 3; i++)
		cin >> ar[i];

	int x = 0, o = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (ar[i][j] == 'X') {
				x++;
			} else if (ar[i][j] == 'O') {
				o++;
			}
		}
	}

	if (o > x) {
		cout << "no\n";
	} else {
		if (x-o == 1 || x-o == 0) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
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

