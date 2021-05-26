#include <bits/stdc++.h>
using namespace std;

#define ll long long
int ar[4][4];

bool gg(int i) {
	if (ar[i][0] == 1 || ar[i][1] == 1 || ar[i][2] == 1)
		return 1;
	int x, y, z;
	x = (i+1)%4;
	y = (i+2)%4;
	z = (i+3)%4;
	if (ar[x][0] == 1 || ar[y][1] == 1 || ar[z][2] == 1)
		return 1;
	return 0;
}

void solve() {
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> ar[i][j];

	for (int i = 0; i < 4; i++) {
		if (ar[i][3] == 1) {
			if (gg(i)) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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


