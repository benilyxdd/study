#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int ans = 0;
	while(v.size() != 0) {
		sort(v.begin(), v.end());
		for (int i = 1; i < v.size(); i++) {
			if (v[i] % v[0] == 0) {
				v[i] = -1;
			}
		}
		v[0] = -1;
		ans++;
		sort(v.rbegin(), v.rend());
		while(v.back() == -1) {
			v.pop_back();
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
