#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n, first;
	cin >> n;
	set<int> v;
	vector<pair<int, int>> ans;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		int size = v.size();
		if (size == 0) {
			first = i;
		}
		v.insert(a);
		if (v.size() == size) {
			ans.push_back({first, i});
			v.clear();
		}
	}
	if (ans.size() == 0) {
		cout << -1 << "\n";
		return;
	}
	cout << ans.size() << "\n";
	for (pair<int, int>& c : ans ) {
		if (c == ans.back()) {
			cout << c.first << " " << n << "\n";
			return;
		}
		cout << c.first << " " << c.second << "\n";
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

