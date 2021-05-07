#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9 + 7;
const int MOD2 = (int)1e9 + 9;

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int cnt = 0;
	vector<array<int, 4>> ans;
	for (int i = 1; i < n; i++) {
		int gcd = __gcd(ar[i], ar[i - 1]);
		if (gcd != 1) {
			int mn = min(ar[i - 1], ar[i]);
			if (i - 2 >= 0 && ar[i - 2] == MOD) {
				ar[i - 1] = MOD2;
			} else {
				ar[i - 1] = MOD;
			}
			ar[i] = mn;
			ans.push_back({i, i + 1, ar[i - 1], mn});
			cnt++;
		}
	}

	cout << cnt << '\n';
	for (array<int, 4>& ar : ans) {
		for (int& in : ar) {
			cout << in << ' ';
		}
		cout << '\n';
	}
	// for (int& x : ar) {
	// 	cout << x << ' ';
	// }
	// cout << '\n';
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

