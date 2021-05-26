#include <bits/stdc++.h>
using namespace std;

#define ll long long
char ar[4][4];

void f(int i, int j, int& cnt1, int& cnt2) {
	for (int k = i; k < i+2; k++) {
		for (int l = j; l < j+2; l++) {
			if (ar[k][l] == '.') {
				cnt1++;
			} else {
				cnt2++;
			}
		}
	}
}

void solve() {
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> ar[i][j];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int cnt1 = 0, cnt2 = 0;
			f(i, j, cnt1, cnt2);
			int yo = abs(cnt1-cnt2);
			if (yo == 2 || yo == 4) {
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


