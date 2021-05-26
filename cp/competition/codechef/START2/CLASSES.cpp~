#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
vector<int> ar[mxN];

void solve() {
	for (int i = 0; i < mxN; i++) {
		ar[i].clear();
	}

	int n, m, s, k;
	cin >> n >> m >> s >> k;
	
	bool ok[mxN];
	memset(ok, false, sizeof(ok));
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		ar[u].push_back(v);
		ar[v].push_back(u);
	}
	for (int i = 0; i < s; i++) {
		int a;
		cin >> a;
		ok[a] = 1;
	}

	vector<int> dis(n+1, (int)1e9);
	priority_queue<pair<int, int>> pq;
	pq.push({0, 0});
	dis[0] = 0;

	while(!pq.empty()) {
		int u = pq.top().second;
		pq.pop();

		for (int i = 0; i < ar[u].size(); i++) {
			int v = ar[u][i];
			int we = 1;

			if (dis[v] > dis[u] + we) {
				dis[v] = dis[u] + we;
				pq.push({dis[v], v});
			}
		}
	}

	int ans = 0;
	//for (int i = 0; i <= n; i++) {
		//cout << dis[i] << ' ';
	//}
	//cout << '\n';
	vector<int> all;	
	for (int i = 0; i <= n; i++) {
		if (ok[i]) {
			all.push_back(dis[i]);
		}
	}	
	sort(all.begin(), all.end());	

	for (int i = 0; i < k; i++) {
		ans += all[i]*2;
	}
	cout << ans << '\n';
}

signed main() {
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

