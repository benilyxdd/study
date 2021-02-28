#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3+5;
int n, m, ar[mxN][mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		ar[a][b] = 1;
		ar[b][a] = 1;
	}

	int ans = 0;
	while(true) {
		bool ok = 1;
		vector<int> gg;
		for (int i = 0; i <= n; i++) {
			int cnt = 0;
			for (int j = 0; j <= n; j++) {
				cnt += ar[i][j];
			}
			if (cnt == 1) {
				ok = false;
				gg.push_back(i);
			}
		}
		for (int& in : gg) {
			for (int j = 0; j <= n; j++) {
				ar[in][j] = 0;
				ar[j][in] = 0;
			}
		}
		ans++;
		if (ok) {
			break;
		}
	}
	cout << ans-1;
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

