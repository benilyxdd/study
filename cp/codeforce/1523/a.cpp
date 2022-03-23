#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	string s;
	cin >> n >> m >> s;

	vector<bool> pos(n, false); // 1pos
	vector<bool> pos2(n, false); // checking state
	vector<int> temp, temp2; // last 1pos
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			pos[i] = 1;
			pos2[i] = 1;
			temp.push_back(i);
		}
	}

	for (int i = 0; i < m; i++) {
		for (int &x : temp) {
			int y = x + 1;
			if (!(y >= n)) {
				if (y + 1 >= n) {
					pos[y] = 1;
				} else {
					if (!(pos2[y + 1])) {
						pos[y] = 1;
						temp2.push_back(y);
					}
				}
			}

			int z = x - 1;
			if (!(z < 0)) {
				if (z - 1 < 0) {
					pos[z] = 1;
				} else {
					if (!(pos2[z - 1])) {
						pos[z] = 1;
						temp2.push_back(z);
					}
				}
			}
		}

		bool done = true;
		for (int j = 0; j < n; j++) {
			pos2[j] = pos[j];
			if (!pos[j]) {
				done = false;
			}
		}
		if (done) {
			break;
		} else {
			swap(temp, temp2);
			temp2.clear();
		}
	}

	string ans = "";
	for (int i = 0; i < n; i++) {
		if (pos[i]) {
			ans += '1';
		} else {
			ans += '0';
		}
	}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

