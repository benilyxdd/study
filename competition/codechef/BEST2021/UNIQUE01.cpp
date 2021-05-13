#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, a;
	cin >> n;
	unordered_map<int, int> cnt;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cnt[a]++;
	}
	for (pair<const int, int> &p : cnt) {
		if (p.second == 1) {
			cout << p.first << '\n';
			return;
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

