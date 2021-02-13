#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 53;
bool reach[mxN][mxN];
int n, m;
char ar[mxN][mxN];

bool dfs(int i, int j, int where) {
	if (reach[i][j] == 1)
		return true;

	reach[i][j] = 1;
	char temp = ar[i][j];
	bool go = 0;
	
	if (ar[i-1][j] == temp && where != 1) {
		go = max(go, dfs(i-1, j, 2));
	}
	
	if (ar[i+1][j] == temp && where != 2) {
		go = max(go, dfs(i+1, j, 1));
	}
	
	if (ar[i][j-1] == temp && where != 3) {
		go = max(go, dfs(i, j-1, 4));
	}
	
	if (ar[i][j+1] == temp && where != 4) {
		go = max(go, dfs(i, j+1, 3));
	}
	
	return go;
}

void solve() {
	memset(ar, '.', sizeof(ar));
	cin >> n >> m;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++)
			cin >> ar[i][j];

	bool ok = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (reach[i][j] == 0) {
				ok = max(ok, dfs(i, j, 0));
			}
		}
	}

	cout << (ok ? "Yes" : "No");
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

