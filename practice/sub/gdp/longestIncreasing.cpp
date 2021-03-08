#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int ar[mxN], dp[mxN], n;

void debug() {
	for (int i = 0; i < n; i++)
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (ar[i] > ar[j]) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}

	int mx = 0;
	for (int i = 0; i < n; i++) {
		mx = max(mx, dp[i]);
	}
	debug();
	cout << mx;
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

