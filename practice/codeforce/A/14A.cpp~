#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
char ar[mxN][mxN];
int n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];

	int ax = mxN, ay = mxN, bx = 0, by = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ar[i][j] == '*') {
				ax = min(ax, i);
				ay = min(ay, j);
				bx = max(bx, i);
				by = max(by, j);
			}
		}
	}
	//cout << "ax: " << ax << "\nay: " << ay << "\nbx: " << bx << "\nby: " << by << "\n";
	for (int i = ax; i <= bx; i++) {
		for (int j = ay; j <= by; j++) {
			cout << ar[i][j];
		}
		cout << "\n";
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


