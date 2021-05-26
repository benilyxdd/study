#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int ar[mxN][mxN];
bool seen[mxN][mxN];
int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};


void solve() {
	int n, m, z;
	cin >> n >> m >> z;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ar[i][j];
		}
	}

	//assert
	assert(n <= 1000 && n > 0);
	assert(m <= 1000 && m > 0);
	assert(z == 1 || z == 2);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			assert(ar[i][j] == 1 || ar[i][j] == 0);
		}
	}

	vector<int> all;
	if (z == 2) {
		int temp[m][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				temp[j][i] = ar[i][j];
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				ar[i][j] = temp[i][j];
			}
		}
		swap(n, m);
	}
	
	int a, b, c;
	a = b = c = 0;
	for (int i = 0; i < n*m; i++) {
		all.push_back(ar[a][b]);
		seen[a][b] = 1;
		int x = a + dr[c];
		int y = b + dc[c];
		if (n > x && x >= 0 && m > y && y >= 0 && (!seen[x][y])) {
			a = x;
			b = y;
		} else {
			c = (c + 1) % 4;
			a = a + dr[c];
			b = b + dc[c];
		}
	}

	int mx1 = 0, mx2 = 0;
	int temp1 = 0, temp2 = 0;
	for (int i = 0; i < n*m; i++) {
		if (all[i] == 1) {
			temp1++;
			temp2 = 0;
			mx1 = max(mx1, temp1);
		} else {
			temp2++;
			temp1 = 0;
			mx2 = max(mx2, temp2);
		}
	}
	cout << mx1 << ' ' << mx2 << '\n';
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

