#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> mx(100, 0);
	vector<int> speed(100, 0);

	int n, m;
	cin >> n >> m;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = 0; j < x; j++, cnt++) {
			mx[cnt] = y;
		}
	}
	cnt = 0;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = 0; j < x; j++, cnt++) {
			speed[cnt] = y;
		}
	}

	int ans = 0;
	for (int i = 0; i < 100; i++) {
		ans = max(ans, speed[i] - mx[i]);
	}
	cout << ans << '\n';
}

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
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

