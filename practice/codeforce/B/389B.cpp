#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 110;
char ar[mxN][mxN];
int n;

bool go(int i, int j) {
	if (ar[i+1][j] == '.')
		return false;

	if (ar[i+1][j-1] == '.')
		return false;

	if (ar[i+1][j+1] == '.')
		return false;

	if (ar[i+2][j] == '.')
		return false;

	return true;
}

void change(int i, int j) {
	ar[i+1][j] = '.';
	ar[i+1][j-1] = '.';
	ar[i+1][j+1] = '.';
	ar[i+2][j] = '.';
	ar[i][j] = '.';
}

void start() {
	for (int i = 0; i < mxN; i++) 
		for (int j = 0; j < mxN; j++) 
			ar[i][j] = '.';
}

void solve() {
	start();
	cin >> n;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= n; j++) 
			cin >> ar[i][j];

	bool ok = true;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (ar[i][j] == '#') {
				if (go(i, j)) {
					change(i, j);
				} else {
					ok = false;
				}
			}
		}
	}
	cout << (ok ? "YES" : "NO");
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

