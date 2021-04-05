#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	array<int, 2> dp[n];

	for (int i = 0; i < n; i++) {
		dp[i] = {ar[i], 1};
		for (int j = 0; j < i; j++) {
			if (ar[i] > 0 && ar[j] < 0 || ar[i] < 0 && ar[j] > 0) {
				dp[i][1]++;
				dp[i][0] += ar[j];
			}
		}
	}
}

int main() {
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

