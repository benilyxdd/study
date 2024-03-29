#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n;
	cin >> n;
	ll cnt[100005];
	ll dp[100005];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < n; i++) {
		cin >> a;
		cnt[a]++;
	}

	dp[0] = 0;
	dp[1] = cnt[1];

	for (it i = 2; i < 100005; i++) {
		dp[i] = max(dp[i-1], dp[i-2]+i*cnt[i]*1LL);
	}
	cout << dp[100004] << "\n";
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


