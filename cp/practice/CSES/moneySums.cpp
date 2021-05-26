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
	sort(ar.begin(), ar.end());

	set<int> s;
	int dp[n+1][ar.back() * n + 1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= ar.back() * n + 1; i++) {
			 
		}
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

