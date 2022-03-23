#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	vector<int> prefix(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		prefix[i] = prefix[i - 1] + s[i - 1] - '0';
	}
	map<int, ll> m;
	for (int i = 0; i <= n; i++) {
		m[prefix[i] - i]++;
	}
	ll ans = 0;
	for (pair<const int, ll> &p : m) {
		ans += p.second * (p.second - 1) / 2;
	}
	cout << ans << '\n';
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

