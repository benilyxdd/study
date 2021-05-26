#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k, l, r, sall, sk;
	cin >> n >> k >> l >> r >> sall >> sk;

	vector<int> ans;
	int left = sk%k;
	for (int i = 0; i < k; i++) {
		int x = sk/k;
		if (left > 0) {
			x++, left--;
		}
		ans.push_back(x);
	}
	if (n-k > 0) {
		sall -= sk;
		left = sall%(n-k);
		for (int i = 0; i < n-k; i++) {
			int x = sall/(n-k);
			if (left > 0) {
				x++, left--;
			}
			ans.push_back(x);
		}
	}

	for (int& x : ans) {
		cout << x << " ";
	}
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

