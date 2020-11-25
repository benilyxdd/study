#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, x, y, k;
	cin >> n >> x >> y >> k;
	vector<int> v;
	v.push_back(x);
	int xd = 0;
	while(x != y) {
		x = (x+k)%n;
		auto it = find(v.begin(), v.end(), x);
		if (it == v.end()) {
			v.push_back(x);
			xd = 0;
		} else {
			xd++;
			if (xd > n/k+1) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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


