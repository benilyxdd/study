#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxX = (int)1e5+5;
const int mxN = 1000;
int price[mxN], page[mxN];
int dp[mxN+1][mxX];
int n, x;

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++) 
		cin >> price[i];
	for (int i = 0; i < n; i++)
		cin >> page[i];


	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= x; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			} else if (price[i-1] <= j) {
				dp[i][j] = max(page[i-1]+dp[i-1][j-price[i-1]], dp[i-1][j]);
			} else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	/*
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= x; j++) {
			cout << dp[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	cout << dp[n][x];
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

