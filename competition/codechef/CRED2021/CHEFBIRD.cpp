#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

__int128 gcd(int a, __int128 b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

void lcm(vector<array<int, 2>> pow, vector<bool>& alive, int x) {
	__int128 r = pow[0][0];
	for (int i = 1; i < pow.size(); i++) {
		r = __int128((pow[i][0] * r) / gcd(pow[i][0], r));
	}
	if (r <= x) {
		for (array<int, 2>& bird : pow) {
			alive[bird[1]] = false;
		}
	}
	// cout << "R:" << r << '\n';
}

void solve() {
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	vector<bool> alive(n, 1);

	vector<vector<array<int, 2>>> pow_set;
	for (int i = 0; i < (1 << n); i++) {
		vector<array<int, 2>> temp;
		for (int j = 0; j < n; j++) {
			if (i & (i << j)) {
				temp.push_back({ar[j], j});
			}
		}
		if (temp.size() > k) {
			pow_set.push_back(temp);
		}
	}

	for (vector<array<int, 2>>& pow : pow_set) {
		// for (array<int, 2>& yo : pow) {
		// 	cout << yo[0] << ' ' << yo[1] << '\n';
		// }
		// cout << '\n';
		lcm(pow, alive, x);
	}

	// for (int i = 0; i < n; i++) {
		// cout << alive[i];
	// }
	// cout << '\n';
	cout << count(alive.begin(), alive.end(), 1) << '\n';
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

