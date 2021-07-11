#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (i & 1) {
			cnt += ar[i] - 1;
		} else {
			cnt += ar[i];
		}
	}
	cout << (cnt > x ? "No" : "Yes") << '\n';
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

