#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)1e9;
const int mxN = (int)1e6+6;
int n, x;
int a[mxN];
ll dp[mxN+1];

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++) 
		cin >> a[i];

	for (int i = 1; i <= x; i++) {
		dp[i] = MAX;
		for (int j = 0; j < n; j++) {
			if (a[j] <= i) {
				dp[i] = min(dp[i], dp[i-a[j]]+1);
			}
		}
	}
	cout << (dp[x] >= MAX ? -1 : dp[x]);
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

