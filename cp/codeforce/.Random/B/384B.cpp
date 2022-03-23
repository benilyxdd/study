#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int n, m, k, ar[mxN][mxN];

void solve() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];
	
	cout << m*(m-1)/2 << "\n";
	if (!k) {
		for (int i = 1; m > 0; m--) {
			for (int j = 0; j < m-1; j++) {
				cout << i+j << " " << i+j+1 << "\n";
			}
		}
	} else {
		for (int i = m; m > 0; m--) {
			for (int j = 0; j < m-1; j++) {
				cout << i-j << " " << i-j-1 << "\n";
			}
		}
	}
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

