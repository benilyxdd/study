#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int xd[2][n];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cin >> xd[i][j];
		}
	}
	
	for (int i = 0; i <= n; i++) {
		
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

