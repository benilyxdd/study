#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void dfs(int count, vector<bool> &visited, vector<int>& energy_requried, vector<array<int, 2>> city[], int now, int previous) {
		visited[now] = true;
		int dis = -1;
		
		for (array<int, 2>& ct : city[now]) {
			if (ct[0] == previous) {
				dis = ct[1];
				break;
			}
		}
		// cout << "NOW: " << now << ' ' << energy_requried[previous] << ' ' << count << '\n';
		energy_requried[now] = min(energy_requried[now], count * dis + energy_requried[previous]);

		for (array<int, 2>& ct : city[now]) {
			if (!visited[ct[0]]) {
				dfs(count + 1, visited, energy_requried, city, ct[0], now);
			}
		}
	}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> traveler(m);
	vector<array<int, 2>> city[n];
	for (int& energy : traveler) {
		cin >> energy;
	}
	for (int i = 0; i < n - 1; i++) {
		int f, l, dis;
		cin >> f >> l >> dis;
		f--, l--;
		city[f].push_back({l, dis});
		city[l].push_back({f, dis});
	}

	// for (int i = 0; i < n; i++) {
	// 	for (array<int, 2>& ar : city[i]) {
	// 		cout << ar[0] << ' ' << ar[1] << '\\';
	// 	}
	// 	cout << '\n';
	// }

	vector<int> special;
	for (int i = 0; i < n; i++) {
		if (city[i].size() == 1) {
			special.push_back(i);
		}
	}

	vector<int> energy_requried(n, (int)1e9);
	energy_requried[0] = 0;

	vector<bool> visited(n, false);
	visited[0] = true;
	for (array<int, 2>& ar : city[0]) {
		dfs(1, visited, energy_requried, city, ar[0], 0);
	}

	// for (int& x : energy_requried) {
	// 	cout << x << ' ';
	// }
	// cout << '\n';
	// for (bool visit : visited) {
	// 	cout << visit << ' ';
	// }
	// cout << '\n';

	vector<int> all;
	for (int& go : special) {
		all.push_back(energy_requried[go]);
	}

	// for (int& go : all) {
	// 	cout << go << ' ';
	// }
	// cout << '\n';
	sort(all.rbegin(), all.rend());
	sort(traveler.rbegin(), traveler.rend());

	int mx = 0;
	for (int i = 0, j = 0; i < all.size(); i++) {
		if (traveler[j] >= all[i]) {
			mx++, j++;
		}
	}
	cout << mx << '\n';
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

