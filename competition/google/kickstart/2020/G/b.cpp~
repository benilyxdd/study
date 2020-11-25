#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	int v[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int temp = v[i][0];
		int j = 1;
		while(i+j < n && j < n) {
			temp += v[i+j][j];
			j++;
		}
		mx = max(temp, mx);
	}
	for (int i = n-2; i >= 0; i--) {
		int temp = v[i][n-1];
		int j = 1;
		while(i-j >= 0 && n-1-j >= 0) {
			temp += v[i-j][n-1-j];
			j++;
		}
		mx = max(temp, mx);
	}
	cout << mx << "\n";
}

signed main() {
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
