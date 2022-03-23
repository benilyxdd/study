#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<int, 3>> ar(n, array<int, 3>());
	for (array<int, 3> &vec : ar) {
		for (int &x : vec) {
			cin >> x;
		}
	}

	int ans = 0;
	for (int i = 0; i < 3; i++) {
		int score = 0;
		vector<int> shell;
		for (int j = 0; j < 3; j++) {
			shell.push_back(i == j);
		}

		for (int j = 0; j < n; j++) {
			swap(shell[ar[j][0] - 1], shell[ar[j][1] - 1]);
			score += shell[ar[j][2] - 1];
		}

		ans = max(ans, score);
	}
	cout << ans << '\n';
}

int main() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
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

