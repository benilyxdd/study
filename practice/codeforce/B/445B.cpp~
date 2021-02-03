#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 52;
vector<int> ar[mxN];
bool ok[mxN];

void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	
	ll ans = 1;
	for (int i = 0; i <= n; i++) {
		int mx = 0, k = 0;
		for (int j = 0; j <= n; j++) {
			if (ok[j] == false && ar[j].size() > mx) {
				mx = max(mx, (int)ar[j].size());
				k = j;
			}
		}

		ok[k] = 1;
		for (int j = 0; j < ar[k].size(); j++) {
			if (1) {
				ans *= 2;
				ok[ar[k][j]] = 1;
			}
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

