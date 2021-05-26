#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 50;
int dp[mxN][mxN], call, n;

ll f(int a, int b) {
	if (a == n && b == n)
		return 1;

	if (a > n || b > n)
		return 0;
	
	if (dp[a][b] != -1)
		return dp[a][b];
	call++;

	int cnt = 0;
	cnt += f(a+1, b);
	cnt += f(a, b+1);

	return dp[a][b] = cnt;
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	int ans = f(1, 1);
	cout << ans << " " << "call: " << call << "\n";
}

signed main() {
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

