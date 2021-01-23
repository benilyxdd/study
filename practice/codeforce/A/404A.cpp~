#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 301;
char ar[mxN][mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++)
			cin >> ar[i][j];

	char x = ar[0][0], x2 = ar[1][0];
	if (x == x2) {
		cout << "NO\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i+j == n-1) {
				if (ar[i][j] != x) {
					cout << "NO\n";
					return;
				
				}
			} else {
				if (ar[i][j] != x2) {
					cout << "NO\n";
					return;
				}
			}
		}
	}
	cout << "YES\n";
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


