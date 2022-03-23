#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int o = 0, e = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		if (a % 2) {
			o++;
		} else {
			e++;
		}
	}
	if (abs(e-o) <= 1) {
		cout << 0 << "\n";
		return;
	}

	sort(v.begin(), v.end());
	int ans = 0;
	int x = abs(e-o)-1;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < v.size(); j++) {
			if (e > o) {
				if (v[j]%2 == 0) {
					ans += v[j];
					v[j] = 1;
					break;
				}
			} else {
				if (v[j]%2 == 1) {
					ans += v[j];
					v[j] = 2;
					break;
				}
			}
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
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

