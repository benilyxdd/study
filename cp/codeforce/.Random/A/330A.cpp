#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	char xd[a][b];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> xd[i][j];
		}
	}
	int row = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (xd[i][j] == 'S') {
				row++;
				break;
			}
		}
	}
	int col = 0;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			if (xd[j][i] == 'S') {
				col++;
				break;
			}
		}
	}
	cout << a*b-col*row << "\n";
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


