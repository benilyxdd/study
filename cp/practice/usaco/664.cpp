#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<string , 2>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1];
	}

	vector<array<array<int, 26>, 2>> cnt(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			for (char &ch : ar[i][j]) {
				cnt[i][j][ch - 'a']++;
			}
		}
	}

	vector<int> ans(26, 0);
	for (int i = 0; i < 26; i++) {
		int total = 0;
		for (int j = 0; j < n; j++) {
			total += max(cnt[j][0][i], cnt[j][1][i]);
		}
		ans[i] = total;
	}

	for (int &x : ans) {
		cout << x << '\n';
	}
}

int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
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

