#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, m;

void solve() {
	cin >> n >> m;
	set<array<int, 2>> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.insert({a, i});
	}
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		auto it = s.lower_bound({a+1, 0});
		if (it == s.begin()) {
			cout << "-1\n";
		} else {
			it--;
			cout << (*it)[0] << "\n";
			s.erase(it);
		}
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

