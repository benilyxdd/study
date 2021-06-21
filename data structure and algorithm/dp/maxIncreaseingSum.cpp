#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int ar[mxN], n, dp[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	memcpy(dp, ar, sizeof(ar));
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (ar[i] > ar[j]) {
				dp[i] = max(dp[i], dp[j]+ar[i]);
			}
		}
	}
	cout << *max_element(dp, dp+n);
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

