#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	vector<int> v;
	for (int i = 0; i < 6; i++) {
		cin >> a;
		v.push_back(a);
	}
	int x, c, z;
	bool xx = false, xc = false, xz = false;
	cin >> x >> c >> z;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (v[i] + v[j] == x) {
				xx = true;
			} else if (v[i] + v[j] == c) {
				xc = true;
			} else if (v[i] + v[j] == z) {
				xz = true;
			}
		}
	}
	cout << (xx&&xc&&xz ? "Yes" : "No") << "\n";
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

