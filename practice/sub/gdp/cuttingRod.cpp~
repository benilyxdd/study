//https://www.geeksforgeeks.org/cutting-a-rod-dp-13/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int n, m, price[mxN], dp[mxN];

void debug() {
	for (int j = 0; j <= m; j++) {
		cout << dp[j] << ' ';
	}
	cout << '\n';
}

void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> price[i];
	
	dp[0] = 0;
	for (int i = 1; i <= m; i++) {
		dp[i] = INT_MIN;
		for (int j = 0; j < i; j++) {
			dp[i] = max(dp[i], price[j+1]+dp[i-j-1]);
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

