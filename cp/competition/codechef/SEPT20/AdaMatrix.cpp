#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<vector<int>> vv;
	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			temp.push_back(a);
		}
		vv.push_back(temp);
	}
	int ans = 0;
	for (int i = n-1; i >= 1; i--) {
		if (ans % 2 == 0) {
			if (vv[0][i] != i+1) {
				ans++;
			}
		} else {
			if (vv[i][0] != i+1) {
				ans++;
			}
		}
	}

	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
