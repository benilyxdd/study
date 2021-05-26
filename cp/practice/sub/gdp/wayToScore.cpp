//https://www.geeksforgeeks.org/count-number-ways-reach-given-score-game/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int dp[mxN], ok[3] = {3, 5, 10};

void debug(int n) {
	for (int i = 0; i <= n; i++)
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	int n;
	cin >> n;

	dp[0] = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j <= n; j++) {
			if (j >= ok[i]) {
				dp[j] += dp[j-ok[i]];
			}
		}
	}
	debug(n);
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

