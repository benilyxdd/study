//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, ar[mxN], dp[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
	   cin >> ar[i];
	
	dp[0] = ar[0];
	dp[1] = ar[1]+ar[0];

	for (int i = 2; i < n; i++) {
		dp[i] = max({dp[i-1], dp[i-2]+ar[i], dp[i-3]+ar[i-1]+ar[i]});
	}
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

