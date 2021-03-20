#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> adj[26];
bool vis[26], act[26], cycle;

void debug() {
	for (int i = 0; i < 26; i++) {
		cout << i << ": ";
		for (int& x : adj[i]) {
			cout << x << ' ';
		}
		cout << '\n';
	}
}

void dfs(int i, string& ans) {
	vis[i] = 1;
	act[i] = 1;
	
	for (int& x : adj[i]) {
		if (act[x] && x^i) {
			cycle = 1;
		} else {
			if (!vis[x]) {
				dfs(x, ans);
			}
		}
	}
	
	act[i] = 0;
	ans += char(i+'A');
}

void solve() {
	for (int i = 0; i < 26; i++)
		adj[i].clear();
	
	memset(vis, 0, sizeof(vis));
	memset(act, 0, sizeof(act));

	int n, m;
	cin >> n >> m;

	char ar[n][m];
	set<char> s;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ar[i][j];
			s.insert(ar[i][j]);
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ar[i][j] != ar[i-1][j])
				adj[ar[i-1][j]-'A'].push_back(ar[i][j]-'A');
		}
	}

	//debug();
	//return;
	

	cycle = 0;
	string ans = "";
	for (const char& ch : s) {
		if (!vis[ch-'A']) {
			dfs(ch-'A', ans);
		}
	}

	if (cycle) {
		cout << "-1\n";
		return;
	}
	cout << ans << '\n';

}

int main() {
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
