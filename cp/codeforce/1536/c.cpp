#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	map<array<int, 2>, int> m;
	int d = 0, k = 0;
	for (int i = 0; i < n; i++) {
		d += (s[i] == 'D');
		k += (s[i] == 'K');

		array<int, 2> ar;
		if (d == 0) {
			ar = {0, 1};
		} else if (k == 0) {
			ar = {1, 0};
		} else {
			int gcd = __gcd(d, k);
			ar = {d / gcd, k / gcd};
		}

		m[ar]++;
		cout << m[ar] << ' ';
	}
	cout << '\n';
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

