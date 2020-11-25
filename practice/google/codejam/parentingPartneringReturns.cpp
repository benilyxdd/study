#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, n;
	cin >> n;
	vector<pair<pair<int, int>, int>> v(n+1);
	v[0] = {{-1, -1}, 0};
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		v[i] = {{a, b}, i};
	}
	sort(v.begin(), v.end());
	
	vector<pair<int, char>> ans;

	bool c = true, d = true;
	pair<int, int> sa = v[0].first, sb = v[0].first;
	for (int i = 1; i <= n; i++) {
		if (v[i].first.first >= sa.second || v[i].first.first >= sb.second) {
			if (c) {
				c = false;
				sa = v[i].first;
				ans.push_back({v[i].second, 'C'});
			} else if (d) {
				d = false;
				sb = v[i].first;
				ans.push_back({v[i].second, 'J'});
			}
		} else {
			cout << "IMPOSSIBLE\n";
			return;
		}
		if (v[i+1].first.first >= sa.second) {
			c = true;
		}
		if (v[i+1].first.first >= sb.second) {
			d = true;
		}
	}
	sort(ans.begin(), ans.end());
	for (auto x : ans) {
		cout << x.second;
	}
	cout << "\n";
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


