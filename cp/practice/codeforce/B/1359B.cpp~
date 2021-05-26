#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	char e;
	vector<vector<char>> v;
	for (int i = 0; i < a; i++) {
		vector<char> temp;
		for (int j = 0; j < b; j++) {
			cin >> e;
			temp.push_back(e);
		}
		v.push_back(temp);
	}
	
	int xdd = 0;
	for (vector<char>& xd : v) {
		int cost = 0;
		if (c*2 <= d) {
			cost += count(xd.begin(), xd.end(), '.')*c;
		} else {
			for (int i = 0; i < b; i++) {
				if (xd[i] == '.' && i < b-1) {
					if (xd[i+1] == '.') {
						i++;
						cost += d;
					} else {
						cost += c;
					}
				} else if (xd[i] == '.' && i == b-1) {
					cost += c;
				}
			}
		}
		xdd += cost;
	}
	cout << xdd << "\n";
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

