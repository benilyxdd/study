#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k, b;
	cin >> n >> k >> b;
	vector<int> ok(n + 1, 1);
	ok[0] = 0;
	for (int i = 0; i < b; i++) {
		int a;
		cin >> a;
		ok[a - 1] = 0;
	}
	vector<int> prefix(n + 1);
	partial_sum(ok.begin(), ok.end(), ++prefix.begin());
	int mn = 1e7;
	for (int i = 0; i < n - k + 1; i++) {
		int good = prefix[i + k] - prefix[i];
		mn = min(mn, k - good);
	}
	cout << mn << '\n';
}

int main() {
	freopen("maxcross.in", "r", stdin);
	freopen("maxcross.out", "w", stdout);
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

