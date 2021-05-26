//https://www.geeksforgeeks.org/counting-pairs-person-can-form-pair-one/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int dp[mxN];

void debug(int n) {
	for (int i = 0; i <= n; i++)
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	int n;
	cin >> n;

	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i-1] + dp[i-2]*(i-1);
	}
	debug(n);
	cout << dp[n] << '\n';
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

