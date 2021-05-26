#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c;
	int cnt = 0;
	vector<int> v;
	vector<string> v1;
	for (int i = 0; i <= b; i++) {
		cin >> d;
		string s = bitset<21>(d).to_string();
		v1.push_back(s);
	}
	for (int i = 0; i < b; i++) {
		int diff = 0;
		for (int j = 0; j < v1[i].length(); j++) {
			if (v1[i][j] != v1[b][j]) {
				diff++;
				if (diff > c) {
					break;
				}
			}
		}
		if (diff <= c) {
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

