#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1001;
vector<int> ar[mxN], girl;
vector<bool> vis(mxN, false);
int n, u, v, dis[mxN], q;

void dfs(int i, int cnt) {
	vis[i] = 1;
	dis[i] = cnt;

	for (int& in : ar[i]) {
		if (!vis[in]) {
			dfs(in, cnt+1);
		}
	}
}

void input() {
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		cin >> u >> v;
		ar[u].push_back(v);
		ar[v].push_back(u);
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> u;
		girl.push_back(u);
	}
	sort(girl.begin(), girl.end());
}

void solve() {
	input();
	dfs(1, 0);


	int mn = INT_MAX, ans = -1;
	for (int& in : girl) {
		if (dis[in] < mn) {
			mn = dis[in];
			ans = in;
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

