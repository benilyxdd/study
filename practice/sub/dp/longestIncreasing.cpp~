#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int n, call, ar[mxN], dp[mxN];

int f(int x) {
	if (x == 0)
		return 1;

	if (dp[x] != -1)
		return dp[x];
	call++;

	int mx = 1;
	for (int i = 0; i < x; i++) {
		if (ar[i] < ar[x]) {
			mx = max(mx, f(i)+1);
		}
	}
	return dp[x] = mx;
}

void solve() {
	memset(dp, -1, sizeof(dp));

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	int mx = 0;
	for (int i = 0; i < n; i++) {
		mx = max(f(i), mx);
	}
	cout << mx << " call: " << call << '\n';
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

