#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m, x;
	cin >> n >> m;
	set<int> a, b;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.insert(x);
	}
	for (int i = 0; i < m; i++) {
		cin >> x;
		b.insert(x);
	}

	vector<int> ans;
	for (const int& z : a) {
		if (b.count(z) == 0) {
			ans.push_back(z);
		}
	}
	for (const int& z : b) {
		if (a.count(z) == 0) {
			ans.push_back(z);
		}
	}
	sort(ans.begin(), ans.end());
	for (int& z : ans) {
		cout << z << ' ';
	}
	cout << '\n';
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

