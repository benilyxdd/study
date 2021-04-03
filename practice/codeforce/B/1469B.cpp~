#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)101;
int a[mxN], b[mxN], n, m;

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
}

void solve() {
	input();
	partial_sum(a, a+n, a);
	partial_sum(b, b+m, b);

	int ans = max(0, *max_element(a, a+n)) + max(0, *max_element(b, b+m));
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

