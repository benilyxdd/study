#include <bits/stdc++.h>
using namespace std;

#define ll long long

const string IMPOSSIBLE = "Impossible";
const string RED_WIN = "Red wins";
const string BLUE_WIN = "Blue wins";
const string NOBODY_WIN = "Nobody wins";

void solve() {
	int n, blue_count = 0, red_count = 0;
	cin >> n;
	vector<vector<char>> board(n, vector<char>(n));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			blue_count += (board[i][j] == 'B');
			red_count += (board[i][j] == 'R');
		}
	}

	if (abs(blue_count - red_count) > 1) {
		cout << IMPOSSIBLE << '\n';
		return;
	}

	vector<vector<bool>> visited(n, vector<bool>(n, false));
	bool red_win = false, blue_win = false;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			dfs(i, j, visited, red_win, blue_win);
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while (t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

