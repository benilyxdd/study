#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string ar[n];
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	vector<array<int, 2>> mark;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ar[i][j] == '*') {
				mark.push_back({i, j});
			}
		}
	}

	//mark[0][0] = x, mark[0][1] = y, mark[1][0] = a, mark[1][1] = b;
	//{x, b}, {a, y};
	// cout << mark[0][0] << ' ' << mark[0][1] << ' ' << mark[1][0] << ' ' << mark[1][1] << '\n';
	if (mark[0][0] != mark[1][0] && mark[0][1] != mark[1][1]) {
		ar[mark[0][0]][mark[1][1]] = '*';
		ar[mark[1][0]][mark[0][1]] = '*';
	} else {
		if (mark[0][0] == mark[1][0]) {
			if (mark[0][0] + 1 < n) {
				ar[mark[0][0] + 1][mark[0][1]] = '*';
				ar[mark[1][0] + 1][mark[1][1]] = '*';
			} else {
				ar[mark[0][0] - 1][mark[0][1]] = '*';
				ar[mark[1][0] - 1][mark[1][1]] = '*';
			}
		} else if (mark[0][1] == mark[1][1]) {
			if (mark[1][0] + 1 < n) {
				ar[mark[0][0]][mark[1][0] + 1] = '*';
				ar[mark[1][0]][mark[1][1] + 1] = '*';
			} else {
				ar[mark[0][0]][mark[1][0] - 1] = '*';
				ar[mark[1][0]][mark[1][1] - 1] = '*';
			}
		}
	}

	for (string& st : ar) {
		cout << st << '\n';
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

