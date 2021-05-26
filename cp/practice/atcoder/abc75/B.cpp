#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<vector<int>> cnt(a, vector<int>(b,0));
	for (int i = 0 ; i < a; i++) {
		for (int j = 0; j < b; j++) {
			char c;
			cin >> c;
			if (c == '#') {
				cnt[i][j] = 999;
			}
			if (i > 0 && j > 0) {
				cnt[i-1][j-1]++;
			}
			if (i > 0) {
				cnt[i-1][j]++;
				cnt[i-1][j+1]++;
			}
			if (j > 0) {
				cnt[i][j-1]++;
				cnt[i+1][j-1]++;
			}
			cnt[i+1][j]++;
			cnt[i][j+1]++;
			cnt[i+1][j+1]++;
		}
	}
	for (auto it : cnt) {
		for (auto it2 : it) {
			cout << it2;
		}
		cout << "\n";
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

