#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, c;
	cin >> n >> c;
	vector<array<ll, 2>> range(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> range[i][j];
		}
	}

	map<ll, int> mp;
	for (int i = 0; i < n; i++) {
		mp[range[i][0]]++;
		mp[range[i][1]]--;
	}
	priority_queue<array<ll, 2>> pq;
	for (pair<const ll, int> &p : mp) {
		pq.push({p.second, p.first});
	}

	
}

int main() {
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

