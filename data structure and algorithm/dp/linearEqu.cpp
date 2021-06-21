//https://www.geeksforgeeks.org/find-number-of-solutions-of-a-linear-equation-of-n-variables/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int dp[mxN], n, ar[mxN], cof;

void debug() {
	for (int i = 0; i <= cof; i++) 
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	cin >> n >> cof;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = ar[i]; j <= cof; j++) {
			dp[j] += dp[j-ar[i]];
		}
	}

	debug();
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

