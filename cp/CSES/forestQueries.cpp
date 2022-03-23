#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q;
	cin >> n >> q;
	vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
			char x;
			cin >> x;
			prefix[i][j] += (x == '*' ? 1 : 0);
		}
	}

	for (int i = 0; i < q; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << (prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1]) << '\n';
	}
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

