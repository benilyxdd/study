#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[a]++;
	}
	int ans = 0;
	for (auto& it : m) {
		int mn = min(abs(it.first - it.second), it.second);
		ans += mn;
	}
	cout << ans << "\n";
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

