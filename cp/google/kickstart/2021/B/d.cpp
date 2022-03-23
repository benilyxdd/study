#include <bits/stdc++.h>
using namespace std;

#define ll long long

void dfs(vector<vector<int>>& way, vector<vector<int>>& adj, vector<bool>& visited, int cur, int pre) {
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

ll gcd(ll a, ll b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

ll v_gcd(vector<ll>& vec) {
	int n = vec.size();
	if (n == 0) {
		return 0;
	}
	ll res = vec[0];
	for (int i = 1; i < n; i++) {
		res = gcd(res, vec[i]);
	}
	return res;
}

void solve() {
	int n, q;
	cin >> n >> q;
	// [insert table]
	vector<tuple<int, int, int, ll>> ar;
	vector<vector<int>> road(n);

	for (int i = 0; i < n - 1; i++) {
		int x, y, l;
		ll a;
		cin >> x >> y >> l >> a;
		x--, y--;
		road[x].push_back(y);
		road[y].push_back(x);
		// [insert value to table]
		ar.push_back({x, y, l, a});
	}
	vector<vector<int>> way(n);
	vector<bool> visited(n, false);
	dfs(way, road, visited, 0, -1);

	// for (array<int, 4>& yo : ar) {
	// 	for (int& yoo : yo) {
	// 		cout << yoo << ' ';
	// 	}
	// 	cout << '\n';
	// }

	// cout << '\n';
	// cout << "road:D \n";
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
		vector<ll> g;
		int now = c, all = way[c].size();
		for (int k = all - 1; k >= 0; k--) {
			int next = way[c][k];
			ll mx_w, xd;
			// [insert check]
			for (tuple<int, int, int, ll>& yo : ar) {
				if ((get<0>(yo) == now && get<1>(yo) == next) || (get<0>(yo) == next && get<1>(yo) == now)) {
					mx_w = get<2>(yo);
					xd = get<3>(yo);
				}
			}
			// cout << "MXW:" << mx_w << ' ';
			if (mx_w <= j) {
				g.push_back(xd);
			}
			now = next;
		}
		// cout << "CHECK: \n";
		// for (int& yo : g) {
		// 	cout << yo << ' ';
		// }
		// cout << '\n';
		ll ans = v_gcd(g);
		cout << ans << ' ';
	}
	cout << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("d_tc.txt", "r", stdin);
	freopen("d_my.txt", "w", stdout);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

