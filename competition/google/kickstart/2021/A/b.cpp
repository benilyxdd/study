#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;

	int ar[n][m], top[n+1][m+1], left[n+1][m+1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> n >> m;
		}
	}

	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (ar[i-1][j-1] == 0) {
				continue;
			}
			top[i][j] = top[i-1][j] + 1;
			left[i][j] = left[i][j-1] + 1;
		}
	}

}

int main() {
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

