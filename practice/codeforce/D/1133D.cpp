#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n;
	cin >> n;
	vector<int> v, v1;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		cin >> a;
		v1.push_back(a);
	}

	int ans = 0;
	map<pair<int, int>, int> m;
	for (int i = 0; i < n; i++)  {
		if (v[i] == 0) {
			if (v1[i] == 0) {
				ans++;
			}
		} else {
			int xd = __gcd(abs(v[i]), abs(v1[i]));
			v[i] /= xd;
			v1[i] /= xd;
			if (v[i] < 0) {
				v1[i] *= -1;
				v[i] *= -1;
			}
			m[make_pair(-v1[i], v[i])]++;
		}
	}
	int xdd = 0;
	for (pair<pair<int, int>, int> p : m) {
		xdd = max(xdd, p.second);
	}
	cout << xdd + ans << "\n";
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


