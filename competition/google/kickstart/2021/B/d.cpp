#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)5e4 + 4;

void dfs(vector<vector<int>>& way, vector<int> adj[], vector<bool>& visited, int cur, int pre) {
	visited[cur] = true;
	if (pre != -1) {
		for (int& go : way[pre]) {
			way[cur].push_back(go);
		}
		way[cur].push_back(pre);
	}
	for (int& go : adj[cur]) {
		if (!visited[go]) {
			dfs(way, adj, visited, go, cur);
		}
	}
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int v_gcd(vector<int> vec) {
	int n = vec.size();
	if (n == 0) {
		return 0;
	}
	int res = vec[0];
	for (int i = 1; i < n; i++) {
		res = gcd(res, vec[i]);
	}
	return res;
}

void solve() {
	int n, q;
	cin >> n >> q;
	// {load, charge}
	vector<int> ar[mxN];
	vector<int> road[n];

	for (int i = 0; i < n - 1; i++) {
		int x, y, l, a;
		cin >> x >> y >> l >> a;
		x--, y--;
		road[x].push_back(y);
		road[y].push_back(x);
		ar[x].push_back(y);
		ar[x].push_back(l);
		ar[x].push_back(a);
		ar[y].push_back(x);
		ar[y].push_back(l);
		ar[y].push_back(a);
	}
	vector<vector<int>> way(n);
	vector<bool> visited(n, false);
	dfs(way, road, visited, 0, -1);

	// cout << '\n';
	// for (vector<int>& yo : way) {
	// 	for (int& yoyo : yo) {
	// 		cout << yoyo << ' ';
	// 	}
	// 	cout << '\n';
	// }

	for (int i = 0; i < q; i++) {
		int c, j;
		cin >> c >> j;
		c--;
		vector<int> g;
		int now = c, all = way[c].size();
		for (int k = all - 1; k >= 0; k--) {
			int next = way[c][k];
			int mx_w, xd;
			// for (auto& yo : ar[now]) {
			// 	if (yo[0] == next) {

			// 	}
			// }
			// for (auto& yo : ar) {
			// 	if (yo.first == now && yo.second[0] == next) {
			// 		mx_w = yo.second[1];
			// 		xd = yo.second[2];
			// 	}
			// }
			// cout << "MXW:" << mx_w << ' ';
			if (mx_w <= j) {
				g.push_back(xd);
			}
			now = next;
		}
		int ans = v_gcd(g);
		cout << ans << ' ';
	}
	cout << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

