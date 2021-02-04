#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 51;
int n, k, p, ar[mxN][mxN], pre[mxN][mxN], dp[mxN][mxN*mxN];

int f(int take, int stacks) {
	if (take >= p || stacks == n) 
		return 0;

	if (dp[take][stacks] != -1) 
		return dp[take][stacks];

	int ans = 0;
	for (int i = 0; i <= min(p-take, k); i++) {
		ans = max(ans, f(take+i, stacks+1)+pre[stacks][i]);
	}
	return ans;
}

void prefix() {
	for (int i = 0; i < n; i++) {
		pre[i][0] = 0;
		for (int j = 1; j <= k; j++) {
			pre[i][j] = pre[i][j-1]+ar[i][j-1];
		}
	}
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= k; j++) {
			cout << pre[i][j] << " ";
		}
		cout << "\n";
	}
	*/
}

void solve() {
	memset(dp, 0, sizeof(dp));
	cin >> n >> k >> p;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++) 
			cin >> ar[i][j];
	
	prefix();
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
