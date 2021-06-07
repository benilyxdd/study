#include <bits/stdc++.h>
using namespace std;

#define ll long long

void dfs(int i, vector<bool> &ok, vector<vector<int>> &ar) {
	if (ok[i]) {
		return;
	}
	ok[i] = true;
	for (int &route : ar[i]) {
		dfs(route, ok, ar);
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> ar(n, vector<int>());
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		ar[a].push_back(b);
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		vector<bool> go(n, false);
		dfs(i, go, ar);
		for (int j = 0; j < n; j++) {
			if (go[j]) {
				ans++;
			}
		}
	}
	cout << ans << '\n';
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

