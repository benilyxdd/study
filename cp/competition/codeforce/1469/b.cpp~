#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int a[mxN], b[mxN];
int n, m;
int dp[mxN][mxN][3];

int dpp(int na, int nb, int x) {
	if (na == n || nb == m) 
		return 0;
	
	if (dp[na][nb][x] != -1) 
		return dp[na][nb][x];

	int ans = 0;
	if (x == 1) {
		ans += a[na];
	} else if (x == 2) {
		ans += b[nb];
	}
	int xd = dpp(na+1, nb, 1);
	int xd2 = dpp(na, nb+1, 2);
	ans += max(xd, xd2);

	return dp[na][nb][x] = ans;
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			a[i] = 0;
		} else {
			break;
		}
	}
	for (int i = 0; i < m; i++) {
		if (b[i] < 0) {
			b[i] = 0;
		} else {
			break;
		}
	}
	for (int i = n-1; i >= 0; i--) {
		if (a[i] < 0) {
			a[i] = 0;
		} else {
			break;
		}
	}
	for (int i = m-1; i >= 0; i--) {
		if (b[i] < 0) {
			b[i] = 0;
		} else {
			break;
		}
	}
	
	int yoooo = dpp(0, 0, 0);
	cout << yoooo << "\n";
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

