#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	string s;
	cin >> n;
	map<string, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> s;
		mp[s]++;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> s;
		mp[s]--;
	}

	int mx = 0;
	for (pair<const string, int>& p : mp) {
		mx = max(mx, p.second);
	}
	cout << mx;
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

