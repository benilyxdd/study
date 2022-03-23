#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 105;
const int MOD = (int)1e9+7;
const int mxX = (int)1e6+6;
int ar[mxN], dp[mxX], n, x;

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= x; j++) {
			if (ar[i] <= j) {
				dp[j] = (dp[j]+dp[j-ar[i]])%MOD;
			}
		}
	}
	cout << dp[x];
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

