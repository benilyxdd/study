#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	map<pair<int,int>, int> m;
	while(n--) {
		int a, b;
		cin >> a >> b;
		auto it = m.find(make_pair(a, b));
		if (it == m.end()) {
			m[make_pair(a, b)] = 1;
		} else {
			m[make_pair(a, b)]++;
		}
	}
	map<pair<int,int>, int>::iterator itr;
	int mx = 0;
	for (itr = m.begin(); itr != m.end(); ++itr) {
		if (itr -> second > mx) {
			mx = itr -> second;
		}
	}
	cout << mx << "\n";
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
