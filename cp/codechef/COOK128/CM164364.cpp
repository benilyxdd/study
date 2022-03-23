#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, x, cnt = 0;
	cin >> n >> x;
	vector<int> ar(n);
	set<int> s;
	for (int& z : ar) {
		cin >> z;
		if (s.count(z)) {
			cnt++;
		}
		s.insert(z);
	}
	int left = x - cnt;
	cout << (int)s.size() - max(0LL, left) << '\n';
}

signed main() {
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

