//https://www.geeksforgeeks.org/count-ways-reach-nth-stair-using-step-1-2-3/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int dp[mxN];

void debug(int n) {
	for (int i = 0; i <= n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
}

void solve() {
	int n;
	cin >> n;
	
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 3; j++) {
			if (i >= j) {
				dp[i] += dp[i-j];
			}
		}
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

