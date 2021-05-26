#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<vector<char>> vv;
	for (int i = 0; i < n; i++) {
		vector<char> temp;
		for (int j = 0; j < n; j++) {
			char x;
			cin >> x;
			temp.push_back(x);
		}
		vv.push_back(temp);
	}

	int cnt = 0;
	for (int i = 1; i < n-1; i++) {
		for (int j = 1; j < n-1; j++) {
			if (vv[i][j] == vv[i-1][j-1] && vv[i-1][j-1] == vv[i-1][j+1] && vv[i-1][j+1] == vv[i+1][j-1] && vv[i+1][j-1] == vv[i+1][j+1] && vv[i+1][j+1] == 'X') {
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
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
