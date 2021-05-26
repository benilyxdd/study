#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int ar[mxN], n;
int dp[mxN];

int f(int pos) {
	if (pos > n)
		return 0;

	if (dp[pos] != -1)
		return dp[pos];

	int sum = ar[pos-1];
	sum += f(pos+ar[pos-1]);

	return dp[pos] = sum;
}

void solve() {
	cin >> n;
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	int mx = 0;
	for (int i = 0; i < n; i++) {
		mx = max(mx, f(i+1));
	}
	cout << mx << "\n";
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}
