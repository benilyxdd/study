//https://www.geeksforgeeks.org/maximum-value-choice-either-dividing-considering/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int dp[mxN];

void solve() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = max(dp[i/2]+dp[i/3]+dp[i/4]+dp[i/5], i);
	}
	
	for (int i = 0; i <= n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
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

