#include <bits/stdc++.h>
using namespace std;

#define ll long long

void dfs(vector<vector<int>> &adj, vector<bool> &visited, int node) {
	visited[node] = true;
	for (int &no : adj[node]) {
		if (!visited[no]) {
			dfs(adj, visited, no);
		}
	}
}

void solve() {
	int n;
	cin >> n;
	vector<vector<int>> adj(n, vector<int>());
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		adj[a].push_back(b);
	}

	vector<vector<bool>> all_visited;
	for (int i = 0; i < n; i++) {
		vector<bool> visited(n, false);
		dfs(adj, visited, i);
		all_visited.push_back(visited);
	}

	for (int i = 0; i < n; i++) {
		bool ok = true;
		for (int j = 0; j < n; j++) {
			if (!all_visited[j][i]) {
				ok = false;
				break;
			}
		}
		if (ok) {
			cout << i + 1 << '\n';
			return;
		}
	}

	cout << -1 << '\n';
}

int main() {
	freopen("factory.in", "r", stdin);
	freopen("factory.out", "w", stdout);
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

