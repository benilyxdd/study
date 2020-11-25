#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		if (a[i] != i+1) 
			v.push_back({a[i], i+1});
	}
	int ans[n];
	for (int i = 0; i < n; i++) ans[i] = i+2;
	for (int i = 0; i < v.size(); i++) {
		ans[v[i].first-1] *= 2;
		for (int j = 0; j < i; j++) {
			if (v[j].first == v[i].first || v[j].first == v[i].second || v[j].second == v[i].first || v[j].second == v[i].second) {
				ans[v[j].first-1] *= 2;
				ans[v[j].second-1] *= 2;
			}
		}
	}
	for (int& x : ans) {
		cout << x << " ";
	}
	cout << "\n";
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

