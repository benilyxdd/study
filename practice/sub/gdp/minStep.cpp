//https://www.geeksforgeeks.org/minimum-steps-minimize-n-per-given-condition/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)1e8;
const int mxN = (int)1e5;
int n, dp[mxN];

int f() {
	dp[0] = dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= n; i++) {
		int a = MAX, b = MAX, c = dp[i-1];
		if (i%2 == 0) {
			a = dp[i/2];
		}
		if (i%3 == 0) {
			b = dp[i/3];
		}

		dp[i] = min({a, b, c})+1;
	}
	return dp[n];
}

void solve() {
	cin >> n;	
	cout << f();
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

