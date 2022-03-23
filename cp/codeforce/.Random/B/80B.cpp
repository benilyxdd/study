#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
string ar[mxN];
int n, m;

bool ok(int i, int j) {
	char ch = ar[i][j];
	for (int k = 0; k < m; k++) {
		if (ar[i][k] == ch && k != j) {
			return false;
		}
	}
	for (int k = 0; k < n; k++) {
		if (ar[k][j] == ch && k != i) {
			return false;
		}
	}
	return true;
}

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ok(i, j)) {
				cout << ar[i][j];
			}
		}
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

