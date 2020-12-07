#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 301;
string ar[mxN];
int n;

void solve() {
	cin >> n;
	int col[3][2], k = 0;
	memset(col, 0, sizeof(col));
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		for (int j = 0; j < n; j++) {
			char c = ar[i][j];
			int val = (i+j)%3;
			if (c == 'X'){
				k++;
				col[val][0]++;
			} else if (c == 'O') {
				k++;
				col[val][1]++;
			}
		}
	}
	///*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j) {
				if (col[i][0]+col[j][1] <= k/3) {
					for (int u = 0; u < n; u++) {
						for (int p = 0; p < n; p++) {
							if ((u+p)%3 == i && ar[u][p] == 'X') {
								ar[u][p] = 'O';
							} else if ((u+p)%3 == j && ar[u][p] == 'O') {
								ar[u][p] = 'X';
							}
						}
						cout << ar[u] << "\n";
					}
					return;
				}
			}
		}
	}
	//*/
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

