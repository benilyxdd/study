#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void debug(unordered_map<int, vector<int>>& pre) {
	for (auto& vec : pre) {
		// cout << vec.first << ' ';
		for (int& x : vec.second) {
			cout << x << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int& x : a) {
		cin >> x;
	}
	for (int& x : b) {
		cin >> x;
	}

	unordered_map<int, vector<int>> pre;
	priority_queue<int> u[n + 1];
	for (int i = 0; i < n; i++) {
		u[a[i]].push(b[i]);
	}
	
	// for (pair<const int, vector<int>>& p : u) {
	// 	sort(p.second.rbegin(), p.second.rend());
	// }

	for (int i = 1; i <= n; i++) {
		if (u[i].size() > 0) {
			pre[i].push_back(u[i].top());
			u[i].pop();
			while (!u[i].empty()) {
				pre[i].push_back(u[i].top() + pre[i].back());
				u[i].pop();
			}
		}
	}

	// debug(pre);
	int mx = 0;
	for (pair<const int, vector<int>>& p : pre) {
		mx = max(mx, (int)p.second.size());
	}

	vector<int> ans(n, 0);
	for (pair<const int, vector<int>>& p : pre) {
		int s = p.second.size();
		for (int i = 1; i <= mx; i++) {
			if (i > s) {
				break;
			} else {
				int can = s / i;
				int go = can * i;
				ans[i - 1] += p.second[go - 1];
			}
		}
	}
	for (int& x : ans) {
		cout << x << ' ';
	}
	cout << '\n';
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

