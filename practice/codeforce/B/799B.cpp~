#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
bool bought[mxN];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> st[4];
int n, m, price[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> price[i];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st[x].push({price[i], i});
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st[x].push({price[i], i});
	}
	
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;

		if (st[x].empty()) {
			cout << -1 << ' ';
			continue;
		}
		
		bool ok = 0;
		while(!st[x].empty()) {
			pair<int, int> tp = st[x].top();
			st[x].pop();
			if (!bought[tp.second]) {
				ok = 1;
				bought[tp.second] = 1;
				cout << tp.first << ' ';
				break;
			}
		}
		if (ok) {
			continue;
		}
		cout << -1 << ' ';
	}
}

signed main() {
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

