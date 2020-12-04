#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 2001;
int n, tf[10], cnt[10];
bool rc[10];
array<int, 2> tf2[10];
string a[mxN];

void solve() {
	memset(tf, 0, sizeof(tf));
	memset(rc, -1, sizeof(rc));
	memset(tf2, 0, sizeof(tf2));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < n; j++) {
			int tar = a[i][j]-'0';
			cnt[tar]++;

			int col = max(j, n-j-1);
			int row = max(i, n-i-1);

			if (col > tf[tar] && tf2[tar][0] != j) {
				tf[tar] = col;
				rc[tar] = false;
				tf2[tar][0] = i;;
				tf2[tar][1] = j;
			}
			
			if (row > tf[tar] && tf2[tar][1] != i) {
				tf[tar] = row;
				rc[tar] = true;
				tf2[tar][0] = i;
				tf2[tar][1] = j;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (tf[i] == 0) {
			cout << "0 ";
		} else if (cnt[i] == 2) {
			cout << "XD ";			
		} else {
			if (rc[i]) {
				int mx = 0;
				for (int j = 0; j < n; j++) {
					if (j != tf2[i][0]) {
						for (int k = 0; k < n; k++) {
							if (a[j][k] == i+'0') {
								mx = max(mx, abs(tf2[i][0]-j));
							}
						}
					}
				}
				cout << mx*tf[i]/2 << " ";
			} else {
				int mx = 0;
				for (int j = 0; j < n; j++) {
					for (int k = 0; k < n; k++) {
						if (a[j][k] == i+'0' && k != tf2[i][1]) {
							mx = max(mx, abs(tf2[i][1]-k));
						}
					}
				}
				cout << mx*tf[i]/2 << " ";
			}
		}
	}
	cout << "\n";
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
