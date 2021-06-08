#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 301;
int n, k;
char ar[mxN][mxN];
char ts[mxN][mxN];
int c1, c2, c3;

void solve() {
	c1 = 0, c2 = 0, c3 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ar[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int temp = (i+j)%3;
			if (ar[i][j] == 'X') {
				if (temp == 1) {
					ts[i][j] = 'a';
					c1++;
				} else if (temp == 2) {
					ts[i][j] = 'b';
					c2++;
				} else {
					ts[i][j] = 'c';
					c3++;
				}
			}
		}
	}
	int mn = min({c1, c2, c3});

	if (c1 == mn) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (ts[i][j] == 'a' && ar[i][j] == 'X') {
					ar[i][j] = 'O';
				}
			}
		}
	} else if (c2 == mn) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (ts[i][j] == 'b' && ar[i][j] == 'X') {
					ar[i][j] = 'O';
				}
			}
		}
	} else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (ts[i][j] == 'c' && ar[i][j] == 'X') {
					ar[i][j] = 'O';
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ar[i][j];
		}
		cout << "\n";
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

