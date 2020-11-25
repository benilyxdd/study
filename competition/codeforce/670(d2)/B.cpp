#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	map<pair<int, int>, int> m
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[make_pair(abs(a), a)]++;
	}

	ll ans = 1;
	int ne = 0, i = 0;
	while(i != 5) {

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

