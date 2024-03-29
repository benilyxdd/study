//https://www.geeksforgeeks.org/maximum-length-subsequence-difference-adjacent-elements-either-0-1/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int ar[mxN], n, dp[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (abs(ar[i]-ar[j]) < 2) {
				dp[i] = max(dp[i], dp[j]+1);
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

