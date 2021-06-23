//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff49/000000000043b0c6

#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll dp[20][2][2][2];

ll cal(string &st, int n, bool even, bool leading, bool tight) {
	if (n == 0)
		return 1;

	if (dp[n][even][leading][tight] != -1) {
		return dp[n][even][leading][tight];
	}

	ll ans = 0;
	int ub = (tight ? st[st.length() - n] - '0' : 9);
	if (leading) {
		ans += (ll)cal(st, n - 1, 0, 1, 0);
	}

	for (int i = 0; i < 10; i++) {
		if (i <= ub && i % 2 == (!even)) {
			ans += (ll)cal(st, n - 1, (!even), 0, (tight & (i == ub)));
		}
	}
	return dp[n][even][leading][tight] = ans;
}

void solve() {
	ll a, b;
	cin >> a >> b;
	a--;

	
	string a_str = to_string(a);
	string b_str = to_string(b);
	int n = a_str.length();
	int m = b_str.length();

	memset(dp, -1, sizeof(dp));
	ll x = cal(b_str, m, 0, 1, 1);
	memset(dp, -1, sizeof(dp));
	ll y = cal(a_str, n, 0, 1, 1);
	cout << (ll)x - y << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
