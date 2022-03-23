#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
const int MAX = (int)1e9+9;
int n, a[mxN];
int dp[mxN];

int mx() {
	int xd = 0, xd1 = 0;
	for (int i = 0; i < n-1; i++) {
		xd1 += a[i];
		xd = max(xd1, xd);
		if (xd1 < 0)
			xd1 = 0;
	}
	xd1 = 0;
	for (int i = 1; i < n; i++) {
		xd1 += a[i];
		xd= max(xd1, xd);
		if (xd1 < 0)
			xd1 = 0;
	}
	return xd;
}

void solve() {
	int sum = 0, cnt = 0, cnt2 = 0;;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		if (a[i] <= 0) {
			cnt++;
		} else {
			cnt2++;
		}
	}
	if (cnt == n) {
		cout << "NO\n";
	} else if (cnt2 == n) {
		cout << "YES\n";
	}else {
		if (mx() < sum) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}


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

