//https://www.geeksforgeeks.org/convert-to-strictly-increasing-integer-array-with-minimum-changes/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	if (n == 1) {
		cout << 0 << '\n';
		return;
	}

	int dp[n+1], mx = 0;
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (ar[i] > ar[j] && i - j <= ar[i] - ar[j]) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		mx = max(mx, dp[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';

	cout << n - mx << '\n';
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

