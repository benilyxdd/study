#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)1e8;
const int mxN = 101;
int n, k, dis[mxN];
array<int, 2> pos[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		cin >> pos[i][0] >> pos[i][1];

	bool tf = false;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			int dx = abs(pos[i][0]-pos[j][0])+abs(pos[i][1]-pos[j][1]);
			if (dx <= k) {
				cnt++;
			} else {
				break;
			}
		}
		if (cnt == n) {
			tf = true;
			break;
		}
	}
	cout << (tf ? 1 : -1) << "\n";
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

