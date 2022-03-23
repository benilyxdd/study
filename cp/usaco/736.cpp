#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> ar(n * 2);
	for (string &st : ar) {
		cin >> st;
	}

	int ans = 0;
	for (int i = 0; i < m; i++) {
		bool ok = true;
		vector<int> cnt(26, 0);
		for (int j = 0; j < n; j++) {
			cnt[ar[j][i] - 'A']++;
		}
		for (int j = 0; j < n; j++) {
			if (cnt[ar[j + n][i] - 'A'] > 0) {
				ok = false;
				break;
			}
		}
		ans += ok;
	}
	cout << ans << '\n';
}

int main() {
	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
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

