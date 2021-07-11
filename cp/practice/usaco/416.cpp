#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> grid(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> grid[i][j];
		}
	}
	vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			prefix[i][j] = prefix[i][j - 1] + grid[i][j];
		}
	}

	int mx = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int cnt = 0;
			for (int p = 0; p < k; p++) {
				array<int, 2> pos1 = {max(0, i - p - 1), max(0, j - (k - p))};
				array<int, 2> pos2 = {max(0, i - p - 1), min(n, j + (k - p - 1))};
				array<int, 2> pos3 = {min(n, i + p + 1), max(0, j - (k - p))};
				array<int, 2> pos4 = {min(n, i + p + 1), min(n, j + (k - p - 1))};
				// cout << pos1[0] << ' ' << pos1[1] << '\n';
				// cout << pos2[0] << ' ' << pos2[1] << '\n';
				// cout << pos3[0] << ' ' << pos3[1] << '\n';
				// cout << pos4[0] << ' ' << pos4[1] << '\n';
				cnt += (prefix[pos2[0]][pos2[1]] - prefix[pos1[0]][pos1[1]]);
				cnt += (prefix[pos4[0]][pos4[1]] - prefix[pos3[0]][pos3[1]]);
			}
			// cout << '\n';
			array<int, 2> pos1 = {i, max(0, j - k - 1)};
			array<int, 2> pos2 = {i, min(n, j + k)};
			cnt += (prefix[pos2[0]][pos2[1]] - prefix[pos1[0]][pos1[1]]);
			// cout << cnt << '\n';
			mx = max(mx, cnt);
		}
	}
	cout << mx << '\n';
}

int main() {
	freopen("lazy.in", "r", stdin);
	freopen("lazy.out", "w", stdout);
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

