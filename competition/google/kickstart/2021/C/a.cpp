#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9 + 7;

bool ispal(string s) {
	int n = s.length();
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - i - 1]) {
			return false;
		}
	}
	return true;
}

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	vector<int> mx(n, 100);
	for (int i = 0; i < n; i++) {
		mx[i] = min(mx[i], s[i] - 'a' + 1);
		mx[n - i - 1] = min(mx[n - i - 1], s[i] - 'a' + 1);
	}

	ll ans = 1;
	if (n == 2) {
		ans = min(mx[0], mx[1]);
	} else if (n == 1) {
		cout << mx[0] - 1 << '\n';
		return;
	} else {
		for (int i = 0; i < (n + 2 - 1) / 2 - 1; i++) {
			ans = (ll)ans * (max(1, (mx[i] - 1) * k + mx[i + 1] * (mx[i] - 1 > 0))) % MOD;;
		}
	}
	cout << ans - ispal(s) << '\n';
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

