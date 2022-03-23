#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;

	int n = a.length();
	string ans;
	for (int i = 0; i < n; i++) {
		ans += a[i];
		if (ans.length() >= b.length() && ans.substr(ans.length() - b.length()) == b) {
			ans.resize(ans.length() - b.length());
		}
	}
	cout << ans << '\n';
}

int main() {
	freopen("censor.in", "r", stdin);
	freopen("censor.out", "w", stdout);
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

