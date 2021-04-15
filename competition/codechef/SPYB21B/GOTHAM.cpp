#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int findNext(int x, int far, vector<int>& mx) {
	int lo = x, hi = far;
	while (lo < hi) {
		int mid = (lo + hi) / 2;
		if (mx[mid] != 0) {
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	// cout << "lo: " << lo << '\n';
	return lo;
}

void solve() {
	int n;
	cin >> n;
	set<int> s;
	vector<int> mx(n);
	for (int i = 0; i < n; i++) {
		cin >> mx[i];
		if (mx[i] > 0) {
			s.insert(i);
		}
	}
	
	int q;
	cin >> q;
	
	for (int i = 0; i < q; i++) {
		int x, k;
		cin >> x >> k;

		int dis = 0;
		auto it = s.lower_bound(x - 1);
		if (it == s.end()) {
			cout << 0 << '\n';
			continue;
		}
		int next = *it, trip = next - x + 1, step = 0;
		// cout << "Next: " << next << '\n';
		while (k > 0 && next + step < n) {
			int less = min(k, mx[next + step]);
			if (less == mx[next + step]) {
				s.erase(next + step);
			}
			mx[next + step] -= less;
			k -= less;
			dis += trip * less;
			trip++, step++;
		}
		// for (int& m : mx) {
		// 	cout << m << ' ';
		// }
		// cout << '\n';
		// for (const int& m : s) {
		// 	cout << m << ' ';
		// }
		// cout << '\n';
		// cout << '\n';
		cout << dis << '\n';
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input_c.txt", "r", stdin);
	// freopen("output_c.txt", "w", stdout);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

