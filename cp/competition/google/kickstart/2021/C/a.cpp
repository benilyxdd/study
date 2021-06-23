#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9 + 7;

ll modpow(ll a, ll b) {
	ll ans = 1;
	for (int i = 0; i < b; i++) {
		ans = (ans * a) % MOD;
	}
	return ans;
}

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;

	int n_half = (n + 2 - 1) / 2;
	string s_half = s.substr(0, n_half);
	ll ans = 0;
	for (int i = n_half; i >= 1; i--) {
		int mx = s_half[i - 1] - 'a' + 1;
		
	}
	cout << ans << '\n';
}

int main() {
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

