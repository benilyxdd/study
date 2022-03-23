#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)3e5+5;
int a[mxN], b[mxN], n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	int cnt = 0;
	sort(a, a+n, greater<int>());

	vector<int> debug;
	for (int i = 0, j = 0; i < n; i++, j++) {
		if (b[j] <= b[a[i]-1] && j < m) {
			cnt += b[j];
			debug.push_back(b[j]);
		} else {
			cnt += b[a[i]-1];
			debug.push_back(b[a[i]-1]);
		}
	}
	/*
	for (int& x : debug) {
		cout << x << " ";
	}
	cout << "\n";
	*/
	cout << cnt << "\n";
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

