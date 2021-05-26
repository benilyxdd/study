#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
vector<int> g[mxN];
vector<int> c[mxN];

void dfs(int u, int p, int color[], int mark[], int par[], int& cyc) {
	if (color[u] == 2) {
		return;
	}

	if (color[u] == 1) {
		cyc++;
		int cur = p;
		mark[cur] = cyc;

		while(cur != u) {
			cur = par[cur];
			mark[cur] = cyc;
		}
		return;
	}

	par[u] = p;
	color[u] = 1;
	for (int v : g[u]) {
		if (v == par[u]) {
			continue;
		}
		dfs(v, u, color, mark, par, cyc);
	}

	color[u] = 2;
}

void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		if (a != b) {
			g[a].push_back(b);
			g[b].push_back(a);
		}
	}	
	int color[n+1], par[n+1], mark[n+1], cyc = 0;
	dfs(1, 0, color, mark, par, cyc);
	cout << cyc << "\n";

	for (int i = 0; i <= n; i++) {
		g[i].clear();
		c[i].clear();
	}
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

