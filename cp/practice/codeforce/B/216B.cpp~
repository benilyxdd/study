#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
vector<int> ar[mxN];
int ok[mxN], go[mxN];

void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
		go[a] = 1;
		go[b] = 1;
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (go[i]) {
			if (!ok[i]) {
				ok[i] = 1;
				for (int j = 0; j < ar[i].size(); j++) {
					if (ok[ar[i][j]] == 1) {
						cnt++;
					} else {
						ok[ar[i][j]] = 2;
					}
				}
			} else if (ok[i] == 1) {
				for (int j = 0; j < ar[i].size(); j++) {
					if (ok[ar[i][j]] == 1) {
						cnt++;
					} else {
						ok[ar[i][j]] = 2;
					}
				}
			} else if (ok[i] == 2) {
				for (int j = 0; j < ar[i].size(); j++) {
					if (ok[ar[i][j]] == 2) {
						cnt++;
					} else {
						ok[ar[i][j]] = 1;
					}
				}
			}
		} 
	}
	cout << cnt/2;
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

