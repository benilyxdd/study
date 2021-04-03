#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	int dp[n];
	set<int> s;
	for (int i = n-1; i >= 0; i--) {
		s.insert(ar[i]);
		dp[i] = s.size();
	}

	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		cout << dp[a-1] << '\n';
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

