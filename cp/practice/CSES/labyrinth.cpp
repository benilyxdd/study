#include <bits/stdc++.h>
using namespace std;

#define ll long long
int dr[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dc[8] = {0, 0, 1, -1, -1, 1, -1, 1};
char dir[4] = {'U', 'D', 'R', 'L'};

string dfs(int x, int y, int &n, int &m, vector<vector<char>> &ar, vector<vector<bool>> &visited) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int j = x + dr[i], k = y + dc[i];
		if (j > -1  && j < n && k > -1 && k < m && ar[j][k] == '.' && !visited[j][k]) {
			dfs(j, k, n, m, ar, visited);
		}
	}
}

void solve() {
	int n, m, x, y;
	cin >> n >> m;
	vector<vector<char>> ar(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ar[i][j];
			if (ar[i][j] == 'A') {
				x = i, y = j;
			}
		}
	}

	vector<vector<bool>> visited(n, vector<bool>(m, false));
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

