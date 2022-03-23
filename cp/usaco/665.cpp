#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<char>> org(n, vector<char>(m)), big(n * k, vector<char>(m * k));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> org[i][j];
			for (int x = 0; x < k; x++) {
				for (int y = 0; y < k; y++) {
					big[x + i * k][y + j * k] = org[i][j];
				}
			}
		}
	}

	for (vector<char> &vec : big) {
		for (char &ch : vec) {
			cout << ch;
		}
		cout << '\n';
	}
}

int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
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

