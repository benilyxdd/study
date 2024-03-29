#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int r, c;
	cin >> r >> c;
	int ar[r][c];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			cin >> ar[i][j];

	ll ans = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			vector<int> temp(4, -1);
			if (i > 0) {
				temp[0] = ar[i-1][j];
			}
			if (j > 0) {
				temp[2] = ar[i][j-1];
			}
			if (i < r-1) {
				temp[1] = ar[i+1][j];
			}
			if (j < c-1) {
				temp[3] = ar[i][j+1];
			}

			int f = *max_element(temp.begin(), temp.end());
			//cout << f << '\n';
			if (f-ar[i][j] > 1) {
				ans += f-ar[i][j]-1;
				ar[i][j] = f-1;
			}
		}
	}
	for (int i = r-1; i >= 0; i--) {
		for (int j = c-1; j >= 0; j--) {
			vector<int> temp(4, -1);
			if (i > 0) {
				temp[0] = ar[i-1][j];
			}
			if (j > 0) {
				temp[2] = ar[i][j-1];
			}
			if (i < r-1) {
				temp[1] = ar[i+1][j];
			}
			if (j < c-1) {
				temp[3] = ar[i][j+1];
			}

			int f = *max_element(temp.begin(), temp.end());
			//cout << f << '\n';
			if (f-ar[i][j] > 1) {
				ans += f-ar[i][j]-1;
				ar[i][j] = f-1;
			}
		}
	}

	cout << ans << '\n';
	/*
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << ar[i][j] << ' ';
		}
		cout << '\n';
	}
	//*/
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


