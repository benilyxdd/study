#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	string s;
	cin >> a >> b >> s;
	int n = s.length();

	int dp[n];
	dp[0] = (s[0] == '1' ? 

	for (int i = 1; i < n; i++) {

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

