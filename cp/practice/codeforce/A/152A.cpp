#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	char c;
	cin >> a >> b;
	vector<vector<int>> vv;
	for (int i = 0; i < b; i++) {
		vector<int> xd;
		vv.push_back(xd);
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> c;
			vv[j].push_back(c-'0');
		}
	}
	
	bool xdd[a];
	memset(xdd, false, sizeof(xdd));
	for (int i = 0; i < b; i++) {
		auto yo = *max_element(vv[i].begin(), vv[i].end());
		for (int j = 0; j < a; j++) {
			if (vv[i][j] == yo) {
				xdd[j] = true;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < a; i++) {
		if (xdd[i] == true) {
			cnt++;
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
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


