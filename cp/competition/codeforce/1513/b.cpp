#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
const int MOD = (int)1e9 + 7;
 
ll fact(int n) {
	ll res = 1LL;
	for (int i = 2LL; i <= n; i++) {
		res = (ll)(res * i) % MOD;
	}
	return res;
}
 
ll f(int cnt, int left) {
	ll res = (cnt * (cnt - 1LL)) % MOD;
	res = (ll)(res * fact(left)) % MOD;
	return res;
}
 
void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	map<int, int> cnt;
	for (int& x : ar) {
		cin >> x;
		cnt[x]++;
	}
 
	ll ans = 0;
	for (pair<const int, int>& p : cnt) {
		// cout << p.first << ' ' << p.second << '\n';
		ans = (ll)(ans + f(p.second, n - 2LL)) % MOD;
	}
	cout << (ans % MOD) << '\n';
}
 
signed main() {
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
