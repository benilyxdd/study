//https://www.geeksforgeeks.org/painting-fence-algorithm/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;
const int mxN = (int)1e3;
int n, k, dp[mxN], diff[mxN], same[mxN];

void solve() {
	cin >> n >> k;

	diff[1] = k;
	diff[2] = k*(k-1);
	same[2] = k;
	dp[1] = k;
	dp[2] = diff[2]+same[2];

	for (int i = 3; i <= n; i++) {
		same[i] = diff[i-1];
		diff[i] = (diff[i-1]+diff[i-2])*(k-1);
		dp[i] = same[i] + diff[i];
	}
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

