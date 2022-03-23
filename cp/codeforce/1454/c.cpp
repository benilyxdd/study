#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)1e9;

void solve() {
	int x, n;
	cin >> n;
	unordered_map<int, int> m;
	vector<int> a;
	int last = MAX;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x != last) {
			a.push_back(x);
			m[x]++;
		}
		last = x;
	}

	set<int> s(a.begin(), a.end());
	int ans = MAX;

	for (const int& i : s) {
		int xd = m[i];
		if (i == a[0] && i == a[a.size()-1]) {
			ans = min(ans, xd-1);
		} else if (i == a[0] || i == a[a.size()-1]) {
			ans = min(ans, xd);
		} else {
			ans = min(ans, xd+1);
		}
	}
	cout << ans << "\n";
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

