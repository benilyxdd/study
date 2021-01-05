#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int n, k, ar[mxN];
vector<int> dp(mxN, (int)1e9);

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j <= k+i; j++) {
			if (j < n) {
				dp[j] = min(dp[j], dp[i]+abs(ar[j]-ar[i]));
			}
		}
	}
	cout << dp[n-1];
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

