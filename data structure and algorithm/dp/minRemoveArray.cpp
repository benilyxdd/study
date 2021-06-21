//https://www.geeksforgeeks.org/minimum-removals-array-make-max-min-k/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int ar[mxN], n, k, dp[mxN][mxN];

void input() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	sort(ar, ar+n);
}

void f() {
	
}

void solve() {
	input();
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

