#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<pair<int, int>> v;
	for (int i = 0; i < a; i++) {
		int d, e;
		cin >> d >> e;
		v.push_back(make_pair(d, e));
	}
	vector<int> v1;
	for (int i = 0; i < b; i++) {
		int d;
		cin >> d;
		v1.push_back(d);
	}
	vector<int> v2;
	for (int i = 0; i < c; i++) {
		int d;
		cin >> d;
		v2.push_back(d);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int mn = 100000007;
	for (int i = 0; i < a; i++) {
		auto it = upper_bound(v1.begin(), v1.end(), v[i].first);
		it--;
		auto it2 = lower_bound(v2.begin(), v2.end(), v[i].second);
		int diff = max(*it2, v[i].second) - min(*it, v[i].first) + 1;
		if (*it == 0 || *it2 == 0) {
			diff = 100000007;
		}
		mn = min(diff, mn);
	}
	cout << mn << "\n";
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

