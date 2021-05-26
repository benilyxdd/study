#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int odd[n+1], even[n+1];
	odd[0] = even[0] = 0;
	for (int i = 0; i < n; i++) {
		if (ar[i]&1) {
			odd[i+1] = 1;
			even[i+1] = 0;
		} else {
			odd[i+1] = 0;
			even[i+1] = 1;
		}
	}
	partial_sum(odd, odd+n, odd);
	partial_sum(even, even+n, even);

	int dp[n], time[n];
	for (int i = 0; i < n; i++) {
		dp[i] = (int)1e8;
		time[i] = 0;
	}
	dp[0] = 0;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (odd[i+1] - odd[j+1] == even[i+1] - even[j+1]) {
				//dp[i] = min(dp[i], dp[j] + abs(ar[j] - ar[i]));
				if (dp[i] > dp[j] + abs(ar[j] - ar[i])) {
					time[i] = time[j] + 1;
					dp[i] = dp[j] + abs(ar[j] - ar[i]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << dp[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << time[i] << ' ';
	}
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

