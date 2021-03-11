//https://www.geeksforgeeks.org/maximum-sum-pairs-specific-difference/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int ar[mxN], n, k, dp[mxN];

void input() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	sort(ar, ar+n);
}

void f() {
	dp[0] = 0;
	
	for (int i = 1; i < n; i++) {
		dp[i] = dp[i-1];

		if (ar[i]-ar[i-1] < k) {
			if (i > 1) {
				dp[i] = max(dp[i], dp[i-2]+ar[i]+ar[i-1]);
			} else {
				dp[i] = max(dp[i], ar[i]+ar[i-1]);
			}
		}
	}
}

void debug() {
	for (int i = 0; i < n; i++)
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	input();
	f();
	//debug();
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

