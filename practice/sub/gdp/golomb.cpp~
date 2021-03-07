//https://www.geeksforgeeks.org/golomb-sequence/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int dp[mxN], n;

void solve() {
	cin >> n;
	
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = 1 + dp[i - dp[dp[i-1]]];
	}

	for (int i = 1; i <= n; i++) {
		cout << dp[i] << ' ';
	}
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

