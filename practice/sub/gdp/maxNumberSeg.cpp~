//https://www.geeksforgeeks.org/maximum-number-segments-lengths-b-c/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int n, ar[3], dp[mxN];

void debug() {
	for (int i = 0; i <= n; i++) 
		cout << dp[i] << ' ';
	cout << '\n';
}

void input() {
	cin >> n;
	for (int i = 0; i < 3; i++)
		cin >> ar[i];
	memset(dp, -1, sizeof(dp));
}

void f() {
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		if (dp[i] != -1) {
			for (int j = 0; j < 3; j++) {
				dp[i+ar[j]] = max(dp[i]+1, dp[i+ar[j]]);
			}
		}
	}
}

void solve() {
	input();
	f();
	debug();
	cout << dp[n];
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

