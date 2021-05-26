#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	vector<int> pre(n);
	partial_sum(ar.begin(), ar.end(), pre.begin());
	if (pre.back() != k) {
		cout << "YES\n";
		int save = -1;
		for (int i = 0; i < n; i++) {
			if (pre[i] == k) {
				save = ar[i];
			} else {
				cout << ar[i] << ' ';
			}
		}
		if (save != -1) {
			cout << save << ' ';
		}
		cout << '\n';
	} else {
		cout << "NO\n";
	}
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

