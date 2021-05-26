#include <bits/stdc++.h>
using namespace std;

#define ll long long
int s, ra, pa, rb, pb, c;
const int mxS = 7;
map<array<int, 2>, pair<bool, vector<array<int, 2>>>> m;
array<int, 2> ar[mxS*mxS];

int dfs(int i, int j) {
	bool ok = 0;
	for (array<int, 2>& vec : m[{i, j}].second) {
		if (m[{vec[0], vec[1]}].first == 0) {
			ok = 1;
		}
	}
	if (!ok) {
		return 0;
	}

	int mn = 1e6;
	for (array<int, 2>& vec : m[{i,j}].second) {
		int x = 0;
		if (m[{vec[0], vec[1]}].first == 0) {
			x += dfs(vec[0], vec[1])+1;
			m[{vec[0],vec[1]}].first = 1;
		}
		mn = min(x, mn);
	}
	return mn;
}

void mark() {
	for (int i = 0; i < c; i++) {
		m[{ar[i][0], ar[i][1]}].first = 1;
	}
	m[{ra, pa}].first = 1;
	m[{rb, pb}].first = 1;
	
}

void debug() {
	for (pair<const array<int, 2>, pair<bool, vector<array<int, 2>>>>& x : m) {
		cout << "target: " << x.first[0] << " " <<  x.first[1] << "\n";
		cout << "ok? " << x.second.first << "\n";
		for (array<int, 2>& y : x.second.second) {
			cout << "{" << y[0] << ", " << y[1] << "}, ";	
		}
		cout << "\n";
	}
}

void solve() {
	m.clear();
	cin >> s >> ra >> pa >> rb >> pb >> c;

	//create adjc list? O(s*(2*(s-1)+1)) -> O(S^2);
	for (int i = 1; i <= s; i++) {
		int have = 2*(i-1)+1;
		for (int j = 1; j <= have; j++) {
			if (j-1 >= 1 && j-1 <= have) {
				m[{i, j}].second.push_back({i, j-1});
			}
			if (j+1 >= 1 && j+1 <= have) {
				m[{i, j}].second.push_back({i, j+1});
			}
			if (j%2 == 0) {
				m[{i, j}].second.push_back({i-1, j-1});
				m[{i-1, j-1}].second.push_back({i, j});
			}
		}
	}
	
	for (int i = 0; i < c; i++) {
		cin >> ar[i][0] >> ar[i][1];
	}

	//mark can't go room; O(C) -> O(S^2);
	mark();
	
	cout << dfs(ra, pa) << "\n";

}

int main() {
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

