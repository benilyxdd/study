#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int ar[mxN][mxN], n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 || i == n-1) {
				if (ar[i][j] == 1) {
					cout << 2 << "\n";
					return;
				}
			}
			if (j == 0 || j == m-1) {
				if (ar[i][j] == 1) {
					cout << 2 << "\n";
					return;
				}
			}
		}
	}
	cout << 4;
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


