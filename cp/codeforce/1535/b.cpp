#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	vector<int> ordered;
	for (int &x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());

	int ans = 0;
	vector<int> ok;
	for (int &x : ar) {
		if (x % 2 == 0) {
			ok.push_back(x);
		}
	}
	for (int &x : ar) {
		if (x & 1) {
			ok.push_back(x);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ans += (__gcd(ok[i], 2 * ok[j]) > 1);
		}
	}
	cout << ans << '\n';
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

