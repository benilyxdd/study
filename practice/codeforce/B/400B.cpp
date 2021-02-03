#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int n, m, ans, cnt[mxN];
char ar[mxN][mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			cin >> ar[i][j];
	
	for (int i = 0; i < n; i++) {
		int g, s, e;
		for (int j = 0; j < m; j++) {
			if (ar[i][j] == 'G') {
				g = j;
			}
			if (ar[i][j] == 'S') {
				s = j;
			}
		}
		int temp = s-g;
		if (temp < 0) {
			cout << -1;
			return;
		}
		cnt[temp]++;
	}

	int ans = 0;
	for (int i = 0; i < mxN; i++) {
		if (cnt[i] != 0) {
			ans++;
		}
	}
	cout << ans;
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

