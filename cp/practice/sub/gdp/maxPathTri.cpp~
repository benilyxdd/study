//https://www.geeksforgeeks.org/maximum-path-sum-triangle/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, ar[mxN][mxN], dp[mxN][mxN];

void debug() {
	cout << "ar[]: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ar[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "\ndp[]: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < i+1; j++) 
			cin >> ar[i][j];
	
	
	dp[0][0] = ar[0][0];
	for (int i = 1; i < n; i++) {
		dp[i][0] = dp[i-1][0]+ar[i][0];
	}
	for (int i = 1; i < n; i++) {
		dp[i][i] = dp[i-1][i-1]+ar[i][i];;
	}
	//debug();

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < i; j++) {
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-1])+ar[i][j];
		}
	}
	cout << *max_element(dp[n-1], dp[n-1]+n);
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

