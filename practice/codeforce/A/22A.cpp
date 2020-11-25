#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	cin >> a;
	set<int> s;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	if (s.size() < 2) {
		cout << "NO\n";
		return;
	}
	auto it = s.begin();
	it++;
	cout << *it << "\n";
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
