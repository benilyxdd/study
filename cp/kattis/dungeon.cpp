#include <bits/stdc++.h>
using namespace std;

#define ll long long
// direction vectors 
// {up, down, right, left, upper-left, upper-right, lower-left, lower-right}
int dr[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dc[8] = {0, 0, 1, -1, -1, 1, -1, 1};

void solve() {
	int r, n, m;
	cin >> r >> n >> m;
	char ar[r][n][m];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> ar[i][j][k];
			}
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

