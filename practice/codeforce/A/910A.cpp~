#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, d, dp[101];
string s;

void f(int p) {
	if (p >= n) 
		return;

	if (dp[p] != -1)
		return dp[p];

	int ans = 0;
	for (int i = 1; i <= d; i++) {
		if (s[p+i-1] == '1') {
			f(p+i-1);
		}
	}
	return dp[p] = ans;
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n >> d >> s;
	cout << dp[n-1];
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


