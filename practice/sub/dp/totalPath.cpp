#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1000;
int mem[mxN][mxN], call, call2;

int total(int n, int m) {
	if (n == 0 && m == 0)
		return 1;

	if (mem[n][m] != -1)
		return mem[n][m];
	call++;

	if (n == 0) 
		return total(n, m-1);

	if (m == 0)
		return total(n-1, m);

	int ans = 0;
	ans += total(n-1, m);
	ans += total(n, m-1);

	return mem[n][m] = ans;
}

int total2(int n, int m) {
	int dp[n][m];
	dp[0][0] = 0;
	call2++;
	for (int i = 1; i < n; i++) {
		dp[i][0] = 1;
		call2++;
	}

	for (int i = 1; i < m; i++) {
		dp[0][i] = 1;
		call2++;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
			//dp[i][j] += dp[i-1][j-1]; // possible to walk diaognally
			call2++;
		}
	}
	
	return dp[n-1][m-1];
}

void solve() {
	int n, m;
	cin >> n >> m;
	
	//recursion
	memset(mem, -1, sizeof(mem));
	cout << total(n-1, m-1) << " /call: " << call << '\n';
	cout << total2(n, m) << " /call: " << call2 << '\n';
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

