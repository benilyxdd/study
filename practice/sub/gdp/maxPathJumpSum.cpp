//https://www.geeksforgeeks.org/maximum-path-sum-position-jumps-divisibility-condition/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int dp[mxN], ar[mxN], n;

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
}

void f() {
	for (int i = 0; i < n; i++) {
		dp[i] = ar[i];
		for (int j = 1; j*j <= i+1; j++) {
			if ((i+1)%j == 0 && i+1 != j) {
				dp[i] = max(dp[i], dp[j]+ar[i]);
			}
		}
	}
}

void debug() {
	for (int i = 0; i < n; i++)
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	input();
	f();
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

