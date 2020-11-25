#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int INF = (int) 1e9;
void solve() {
	int a, b;
	cin >> a >> b;
	vector<vector<char>> vv;
	for (int i = 0; i < a; i++) {
		vector<char> temp;
		for (int j = 0; j < b; j++) {
			char c;
			cin >> c;
			temp.push_back(c);
		}
		vv.push_back(temp);
	}
	
	int minX = INF, maxX = -INF, minY = INF, maxY = -INF;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (vv[i][j] == 'B') {
				minX = min(minX, i);
				minY = min(minY, j);
				maxX = max(maxX, i);
				maxY = max(maxY, j);
			}
		}
	}
	cout << (minX + maxX) / 2 + 1 << " " << (minY + maxY) / 2 + 1;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
