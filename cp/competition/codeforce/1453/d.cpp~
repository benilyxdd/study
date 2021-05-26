#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 2001;
int dp[2][mxN];
int n;

int f(bool ok, int pos) {
	if (pos == n) 
		return 1;

	if (dp[ok][pos] != -1)
		return dp[ok][pos];
	
	ll ans = 1;
	if (ok) {
		ans += f(1, pos+1);
		ans += f(0, pos+1);
	} else {
		ans += f(1, pos+1);
	}
	return ans;
}

void solve() {
	cin >> n;
	cout << f(1, n) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	memset(dp, -1, sizeof(dp));

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

