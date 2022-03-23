#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4+4;
vector<int> ar[mxN];
vector<bool> vis(mxN, false);
int n, m, u, v;

void dfs(int i) {
	vis[i] = 1;
	for (int& in : ar[i]) {
		if (!vis[in]) {
			dfs(in);
		}
	}
}

void input() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		ar[u].push_back(v);
		ar[v].push_back(u);
	}
}

void solve() {
	input();

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i);
			cnt++;
		}
	}

	if (cnt == 1 && n-m == 1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

