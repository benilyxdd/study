#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<vector<int>> adj(n, vector<int>());
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int mx = 0;
	for (int i = 0; i < n; i++) {
		mx = max(mx, (int)adj[i].size());
	}
	cout << mx + 1 << '\n';
}

int main() {
	freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);
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

