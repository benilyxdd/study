//https://www.geeksforgeeks.org/minimum-time-write-characters-using-insert-delete-copy-operation/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int n, in, r, c, dp[mxN];

void debug() {
	for (int i = 0; i <= n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
}

void solve() {
	cin >> n >> in >> r >> c;
	
	dp[0] = 0;
	dp[1] = in;
	
	for (int i = 2; i <= n; i++) {
		if (i%2 == 0) {
			dp[i] = min(dp[i-1]+in, dp[i/2]+c); 
		} else {
			dp[i] = min(dp[i-1]+in, dp[(i+1)/2] + c + r);
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

