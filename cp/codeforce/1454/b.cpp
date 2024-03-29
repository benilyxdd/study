#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)2e5+5;

void solve() {
	int n;
	cin >> n;
	unordered_map<int, int> m;
	pair<int, int> a[n];
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		a[i] = {c, i+1};
		m[c]++;
	}
	int x = MAX+MAX;
	for (auto& [key, value] : m) {
		if (value == 1) {
			x = min(x, key);
		}
	}
	if (x == MAX+MAX) {
		cout << "-1\n";
	} else {
		for (int i = 0; i < n; i++) {
			if (a[i].first == x) {
				cout << a[i].second << "\n";
				return;
			}
		}
	}
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

