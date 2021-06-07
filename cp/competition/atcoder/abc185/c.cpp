#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll dp[200][12];

ll f(ll a, ll b) {
	if (b == 0 || b == a)
		return 1;
	if (dp[a][b] != -1)
		return dp[a][b];

	return dp[a][b] = f(a-1, b-1)+f(a-1, b);
}

void solve() {
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;
	ll ans = f(n-1, 11);
	cout << ans << "\n";
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

