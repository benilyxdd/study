#include <bits/stdc++.h>
using namespace std;

#define ll long long
int dr[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dc[8] = {0, 0, 1, -1, -1, 1, -1, 1};

void dfs(int i, int j, int &n, int &m, vector<vector<char>> &ar, vector<vector<bool>> &visited) {
	visited[i][j] = true;
	for (int k = 0; k < 4; k++) {
		int x = i + dr[k], y = j + dc[k];
		if (x > -1 && x < n && y > -1 && y < m && ar[x][y] == '.' && !visited[x][y]) {
			dfs(x, y, n, m, ar, visited);
		}
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> ar(n, vector<char>(m));
	for (vector<char> &vec : ar) {
		for (char &ch : vec) {
			cin >> ch;
		}
	}
	
	int ans = 0;
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j] && ar[i][j] == '.') {
				dfs(i, j, n, m, ar, visited);
				ans++;
			}
		}
	}
	cout << ans << '\n';
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

