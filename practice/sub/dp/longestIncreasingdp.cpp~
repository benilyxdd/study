#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100;
int n, ar[mxN], dp[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		dp[i] = 0;
		for (int j = 0 ; j < i; j++) {
			if (ar[i] > ar[j]) {
				dp[i] = max(dp[i], dp[j]);
			}
		}
		dp[i]++;
	}

	int ans = -1, pos = -1;
	for (int i = 0; i < n; i++) {
		if (dp[i] > ans) {
			ans = dp[i];
			pos = i;
		}
	}
	cout << ans << '\n';
	
	vector<int> num;
	for (int i = pos; i >= 0 && ans > 0; i--) {
		if (dp[i] == ans) {
			num.push_back(ar[i]);
			ans--;
		}
	}
	reverse(num.begin(), num.end());
	for (int& in : num) {
		cout << in << ' ';
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

