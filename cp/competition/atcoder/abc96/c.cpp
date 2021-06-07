#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> dr = {-1, 1, 0, 0};
vector<int> dc = {0, 0, 1, -1};

void debug(vector<vector<char>>& grid) {
	for (vector<char>& vec : grid) {
		for (char& ch : vec) {
			cout << ch;
		}
		cout << '\n';
	}
}

bool check(int n, int m, vector<vector<char>>& grid) {
	for (int i = 0; i < 4; i++) {
		if (grid[n + dr[i]][m + dc[i]] == '#') {
			return true;
		}
	}
	return false;
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> ar(n + 2, vector<char>(m + 2, '!'));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> ar[i][j];
		}
	}
	// debug(ar);
	// return;
	bool ok = true;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (ar[i][j] == '#') {
				ok = min(ok, check(i, j, ar));
			}
		}
	}
	cout << (ok ? "Yes" : "No");
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

