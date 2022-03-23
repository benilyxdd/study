#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<int, 4>> peak(n, {0, 0, 0, 0}); // neg, pos, x, y, i
	vector<int> id(n);
	for (int i = 0; i < n; i++) {
		cin >> peak[i][2] >> peak[i][3];
		peak[i][0] = peak[i][2] - peak[i][3];
		peak[i][1] = peak[i][2] + peak[i][3];
		id[i] = i;
	}

	auto cmp = [&] (int a, int b) {
		if (peak[a][0] == peak[b][0]) {
		 	return peak[a][1] > peak[b][1];
		}
		return peak[a][0] < peak[b][0];
	};

	sort(id.begin(), id.end(), cmp);
	int mx = -1, ans = 0;
	for (int i = 0; i < n; i++) {
		if (peak[1][id[i]] > mx) {
			ans++;
			mx = peak[1][id[i]];
		}
	}
	cout << ans << '\n';
}

int main() {
	freopen("mountains.in", "r", stdin);
	freopen("mountains.out", "w", stdout);
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

