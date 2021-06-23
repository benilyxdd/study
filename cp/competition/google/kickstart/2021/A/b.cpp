#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 1001;
int ar[mxN][mxN], n, m;

int f(int i, int j) {
	int r = 0, x = 0, y = 0;
	if (ar[i][j] == 0) {
		return 0;
	}

	//top
	x = i-1, y = j;
	if (ar[x][y] == 1) {
		while(x-2 >= 0 && y-1 >= 0 && ar[x-1][j] == 1 && ar[x-2][j] == 1 && ar[i][y-1] == 1) {
			r++, x -= 2, y--;
		}
	}
	
	x = i-1, y = j;
	if (ar[x][y] == 1) {
		while(x-2 >= 0 && y+1 < m && ar[x-1][j] == 1 && ar[x-2][j] == 1 && ar[i][y+1] == 1) {
			r++, x -= 2, y++;
		}
	}

	//left
	x = i, y = j-1;
	if (ar[x][y] == 1) {
		while(y-2 >= 0 && x-1 >= 0 && ar[i][y-1] == 1 && ar[i][y-2] == 1 && ar[x-1][j] == 1) {
			r++, x--, y -= 2;
		}
	}
	
	x = i, y = j-1;
	if (ar[x][y] == 1) {
		while(y-2 >= 0 && x+1 < n && ar[i][y-1] == 1 && ar[i][y-2] == 1 && ar[x+1][j] == 1) {
			r++, x++, y -= 2;
		}
	}

	//right
	x = i, y = j+1;
	if (ar[x][y] == 1) {
		while(y+2 < m && x-1 >= 0 && ar[i][y+1] == 1 && ar[i][y+2] == 1 && ar[x-1][j] == 1) {
			r++, x--, y += 2;
		}
	}
	
	x = i, y = j+1;
	if (ar[x][y] == 1) {
		while(y+2 < m && x+1 < n && ar[i][y+1] == 1 && ar[i][y+2] == 1 && ar[x+1][j] == 1) {
			r++, x++, y += 2;
		}
	}

	//down
	x = i+1, y = j;
	if (ar[x][y] == 1) {
		while(x+2 < n && y-1 >= 0 && ar[x+1][j] == 1 && ar[x+2][j] == 1 && ar[i][y-1] == 1) {
			r++, x += 2, y--;
		}
	}

	x = i+1, y = j;
	if (ar[x][y] == 1) {
		while(x+2 < n && y+1 < m && ar[x+1][j] == 1 && ar[x+2][j] == 1 && ar[i][y+1] == 1) {
			r++, x += 2, y++;
		}
	}

	//if (r > 0)
		//cout << i << ' ' << j << ' ' << r << '\n';
	return r;
}

void input() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ar[i][j];
		}
	}
}

void solve() {
	input();

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ans += f(i, j);
		}
	}
	cout << ans << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}


