#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q;
	cin >> n >> q;
	vector<array<int, 3>> cnt(n + 1, {0, 0, 0});
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		x--;
		cnt[i + 1] = cnt[i];
		cnt[i + 1][x]++;
	}
	
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		cout << cnt[y][0] - cnt[x][0] << ' ' << cnt[y][1] - cnt[x][1] << ' ' << cnt[y][2] - cnt[x][2] << '\n';
	}
}

int main() {
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
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

