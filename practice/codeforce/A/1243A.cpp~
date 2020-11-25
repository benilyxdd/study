#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.rbegin(), v.rend());

	int mn;
	int mx = 0;
	for (int i = 1; i <= n; i++) {
		mn = min(i, v[i-1]);
		mx = max(mn, mx);
	}
	cout << mx << "\n";
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


