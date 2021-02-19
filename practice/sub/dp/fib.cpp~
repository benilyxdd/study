#include <bits/stdc++.h>
using namespace std;

#define ll long long
//mem
const int mxN = 10000;
int dp[mxN];


int fib(int n) {
	if (n == 1 || n == 2)
		return 1;
	if (dp[n] != -1) 
		return dp[n];

	return dp[n] = fib(n-1)+fib(n-2);
}

void solve() {
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;
	cout << fib(n);
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

