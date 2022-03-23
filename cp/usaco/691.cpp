#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<int, 3>> cnt(n + 1, {0, 0, 0}); // hoof, paper, scissors
	for (int i = 0; i < n; i++) {
		cnt[i + 1] = cnt[i];

		char x;
		cin >> x;
		if (x == 'P') {
			cnt[i + 1][1]++;
		} else if (x == 'H') {
			cnt[i + 1][0]++;
		} else if (x == 'S') {
			cnt[i + 1][2]++;
		}
	}

	int mx = 0;
	// for (int i = 0; i < 3; i++) {
	// 	mx = max(mx, n - cnt[n][i]);
	// }

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				int pre = cnt[i][j];
				int suc = (cnt[n][(j + k + 1) % 3] - cnt[i][(j + k + 1) % 3]);
				mx = max(mx, pre + suc);
			}
		}
	}
	cout << mx << '\n';
}

int main() {
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
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

