#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+5;
int n, a, b;

void solve() {
	vector<pair<int, int>> pos, neg;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a < 0) {
			neg.push_back({-a, b});
		} else {
			pos.push_back({a, b});
		}
	}
	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end());
	pos.push_back({0, 0});
	neg.push_back({0, 0});

	int ans = 0;
	for (int i = 0; i < min(pos.size(), neg.size()); i++) {
		ans += pos[i].second;
		ans += neg[i].second;
	}
	cout << ans;
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


